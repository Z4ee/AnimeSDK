#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T> class MLinkedLockFreeQueueNode_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int MLinkedLockFreeQueueNode_1_TypeDefinitionIndex = 33827;

	template <typename T>
	class MLinkedLockFreeQueueNode_1 : public ::System::Object
	{
	public:
		T Item; // 0x0
		::RPG::Client::MLinkedLockFreeQueueNode_1<T>* Next; // 0x0
	};
}
