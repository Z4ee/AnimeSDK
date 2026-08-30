#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class AnimationCurve; }

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int RoadRashGameSettingsConfigure_SlamLateralImpactConfig_TypeDefinitionIndex = 75483;

	struct alignas(8) RoadRashGameSettingsConfigure_SlamLateralImpactConfig
	{
		::System::Single StartValue; // 0x10
		::System::Single EndValue; // 0x14
		::System::Single Duration; // 0x18
		::UnityEngine::AnimationCurve* Curve; // 0x20
	};
}
