#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int RangeFloat_TypeDefinitionIndex = 77807;

	struct alignas(4) RangeFloat
	{
		::System::Single minValue; // 0x10
		::System::Single maxValue; // 0x14
	};
}
