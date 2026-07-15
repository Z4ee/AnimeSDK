#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T> class MLinkedLockFreeQueueNode_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int MLinkedLockFreeQueue_1_TypeDefinitionIndex = 33826;

	template <typename T>
	class MLinkedLockFreeQueue_1 : public ::System::Object
	{
	public:
		::RPG::Client::MLinkedLockFreeQueueNode_1<T>* _Head; // 0x0
		::RPG::Client::MLinkedLockFreeQueueNode_1<T>* _Tail; // 0x0
	};
}
