#include"Queue.h"
int main(){
	struct Deque* mydeque = CreateDeque(10);
	InsertFront(mydeque, 2);
	InsertFront(mydeque, 1);
	InsertFront(mydeque, 5);
	InsertRear(mydeque, 7);
	InsertRear(mydeque, 9);
	printf("%d", DequeFront(mydeque));
	printf("\n");
	printf("%d", DequeRear(mydeque));
	printf("\n");
	return 0;
}
