#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation
{
	inline static constexpr unsigned int MultiCyclicQueueIterator_2_TypeDefinitionIndex = 8039;

	template <typename TMultiQueue, typename T>
	class MultiCyclicQueueIterator_2 : public ::System::Object
	{
	public:
		// static const ::System::Int32 InvalidIndex = 0x7FFFFFFF; // 0x0
		TMultiQueue _Queue; // 0x0
		::System::Int32 _CurItemIndex; // 0x0
		::System::Int32 _NextIndex; // 0x0
		::System::Int32 _IterItemLeft; // 0x0
		::System::Int32 _Group; // 0x0
	};
}
