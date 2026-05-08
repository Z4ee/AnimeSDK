#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

inline static constexpr unsigned int MonoHollowResultPageConfig_HueAndLight_TypeDefinitionIndex = 43204;

struct alignas(4) MonoHollowResultPageConfig_HueAndLight
{
	::System::Single Hue; // 0x10
	::System::Single Light; // 0x14
};
