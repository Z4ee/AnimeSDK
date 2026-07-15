#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace RPG::Client
{
	inline static constexpr unsigned int Airship_AirshipDissolveConfig_TypeDefinitionIndex = 57125;

	struct alignas(4) Airship_AirshipDissolveConfig
	{
		::System::Single DissolveRange; // 0x10
		::UnityEngine::Color DissolveEmissionColor; // 0x14
		::System::Single DissolveEmissionIntensity; // 0x24
	};
}
