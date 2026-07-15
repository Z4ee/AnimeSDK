#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Concurrent/ConcurrentQueue_1_Segment_Slot.h"
#include "unitysdk/System/Collections/Concurrent/PaddedHeadAndTail.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1_Segment; }

namespace System::Collections::Concurrent
{
	inline static constexpr unsigned int ConcurrentQueue_1_Segment_TypeDefinitionIndex = 1513;

	template <typename T>
	class ConcurrentQueue_1_Segment : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Collections::Concurrent::ConcurrentQueue_1_Segment_Slot<T>>* _slots; // 0x0
		::System::Int32 _slotsMask; // 0x0
		::System::Collections::Concurrent::PaddedHeadAndTail _headAndTail; // 0x0
		::System::Boolean _preservedForObservation; // 0x0
		::System::Boolean _frozenForEnqueues; // 0x0
		::System::Collections::Concurrent::ConcurrentQueue_1_Segment<T>* _nextSegment; // 0x0
	};
}
