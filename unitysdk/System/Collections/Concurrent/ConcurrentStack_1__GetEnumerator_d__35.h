#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Concurrent { template <typename T> class ConcurrentStack_1_Node; }

namespace System::Collections::Concurrent
{
	inline static constexpr unsigned int ConcurrentStack_1__GetEnumerator_d__35_TypeDefinitionIndex = 1519;

	template <typename T>
	class ConcurrentStack_1__GetEnumerator_d__35 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T __2__current; // 0x0
		::System::Collections::Concurrent::ConcurrentStack_1_Node<T>* head; // 0x0
		::System::Collections::Concurrent::ConcurrentStack_1_Node<T>* _current_5__1; // 0x0
	};
}
