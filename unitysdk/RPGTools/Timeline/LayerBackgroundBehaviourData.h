#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int LayerBackgroundBehaviourData_TypeDefinitionIndex = 44887;

	struct alignas(4) LayerBackgroundBehaviourData
	{
		::System::Single EmissionIntensity; // 0x10
		::UnityEngine::Vector2 ImageOffset; // 0x14
		::System::Single ImageRotation; // 0x1C
		::System::Single ImageScale; // 0x20
	};
}
