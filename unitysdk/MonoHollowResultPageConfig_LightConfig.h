#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

inline static constexpr unsigned int MonoHollowResultPageConfig_LightConfig_TypeDefinitionIndex = 41018;

struct alignas(4) MonoHollowResultPageConfig_LightConfig
{
	::System::Single range; // 0x10
	::System::Single intensity; // 0x14
	::UnityEngine::Color LightColor_top; // 0x18
	::UnityEngine::Color LightColor_bottom; // 0x28
	::UnityEngine::Color LightColor_left; // 0x38
	::UnityEngine::Color LightColor_right; // 0x48
};
