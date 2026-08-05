#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd
{
	inline static constexpr unsigned int RngToolkit_IntFloatUnion_TypeDefinitionIndex = 82976;

	struct alignas(4) RngToolkit_IntFloatUnion
	{
		::System::Int32 intValue; // 0x10
		::System::Single floatValue; // 0x10
	};
}
