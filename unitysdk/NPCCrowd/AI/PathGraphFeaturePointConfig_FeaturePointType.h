#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphFeaturePointConfig_FeaturePointType_TypeDefinitionIndex = 75749;

	enum class PathGraphFeaturePointConfig_FeaturePointType : ::System::Int32
	{
		BatchSpawnPoint = 5,
		SplineSpawnPoint = 6,
		ExitPoint = 2,
		GuidePoint = 4,
		None = 0,
		SpawnPoint = 1,
		CrossingPoint = 3,
	};
}
