#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Concurrent
{
	inline static constexpr unsigned int ConcurrentQueue_1_Segment_Slot_TypeDefinitionIndex = 1514;

	template <typename T>
	struct ConcurrentQueue_1_Segment_Slot
	{
		T Item; // 0x0
		::System::Int32 SequenceNumber; // 0x0
	};
}
