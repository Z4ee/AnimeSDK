#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int RangeInt_TypeDefinitionIndex = 68758;

	struct alignas(4) RangeInt
	{
		::System::Int32 minValue; // 0x10
		::System::Int32 maxValue; // 0x14
	};
}
