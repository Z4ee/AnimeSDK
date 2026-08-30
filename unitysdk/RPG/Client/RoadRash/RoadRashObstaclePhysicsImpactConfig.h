#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RoadRash/EObstaclePhysicsImpactMode.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class AnimationCurve; }

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int RoadRashObstaclePhysicsImpactConfig_TypeDefinitionIndex = 75451;

	struct alignas(8) RoadRashObstaclePhysicsImpactConfig
	{
		::RPG::Client::RoadRash::EObstaclePhysicsImpactMode Mode; // 0x10
		::System::Boolean FixedToRight; // 0x14
		::System::Single StartValue; // 0x18
		::System::Single EndValue; // 0x1C
		::System::Single Duration; // 0x20
		::UnityEngine::AnimationCurve* Curve; // 0x28
	};
}
