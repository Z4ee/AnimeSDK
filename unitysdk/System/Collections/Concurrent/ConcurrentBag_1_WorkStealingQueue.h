#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Concurrent { template <typename T> class ConcurrentBag_1_WorkStealingQueue; }

namespace System::Collections::Concurrent
{
	inline static constexpr unsigned int ConcurrentBag_1_WorkStealingQueue_TypeDefinitionIndex = 4000;

	template <typename T>
	class ConcurrentBag_1_WorkStealingQueue : public ::System::Object
	{
	public:
		// static const ::System::Int32 InitialSize = 0x20; // 0x0
		// static const ::System::Int32 StartIndex = 0x0; // 0x0
		::System::Int32 _headIndex; // 0x0
		::System::Int32 _tailIndex; // 0x0
		::Il2CppArray<T>* _array; // 0x0
		::System::Int32 _mask; // 0x0
		::System::Int32 _addTakeCount; // 0x0
		::System::Int32 _stealCount; // 0x0
		::System::Int32 _currentOp; // 0x0
		::System::Boolean _frozen; // 0x0
		::System::Collections::Concurrent::ConcurrentBag_1_WorkStealingQueue<T>* _nextQueue; // 0x0
		::System::Int32 _ownerThreadId; // 0x0
	};
}
