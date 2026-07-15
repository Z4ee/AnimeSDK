#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Collections::Pooled
{
	inline static constexpr unsigned int PooledSet_1_Slot_TypeDefinitionIndex = 5106;

	template <typename T>
	struct PooledSet_1_Slot
	{
		::System::Int32 hashCode; // 0x0
		::System::Int32 next; // 0x0
		T value; // 0x0
	};
}
