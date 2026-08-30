#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RoadRash/MonoEffectConfig.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int RoadRashObstacleImpactVisualOverrideConfig_TypeDefinitionIndex = 75462;

	struct alignas(8) RoadRashObstacleImpactVisualOverrideConfig
	{
		::RPG::Client::RoadRash::MonoEffectConfig AttackerEffectConfig; // 0x10
		::System::Single VisualEffectDuration; // 0x40
	};
}
