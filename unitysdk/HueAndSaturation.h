#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

inline static constexpr unsigned int HueAndSaturation_TypeDefinitionIndex = 74803;

struct alignas(4) HueAndSaturation
{
	::System::Single Hue; // 0x10
	::System::Single Saturation; // 0x14
	::System::Single Brightness; // 0x18
};
