#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int RimLightParameter_TypeDefinitionIndex = 46649;

	struct alignas(4) RimLightParameter
	{
		::UnityEngine::Vector2 RimLightOffset; // 0x10
		::System::Single RimLightWidth; // 0x18
		::System::Single RimLightIntensity; // 0x1C
		::UnityEngine::Color RimLightColor; // 0x20
		::System::Single RimLightAddMode; // 0x30
		::System::Single RimShadowIntensity; // 0x34
		::UnityEngine::Color RimShadowColor; // 0x38
	};
}
