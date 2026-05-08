#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSpawnPointConfig_SpawnStyle_TypeDefinitionIndex = 62977;

	enum class PathGraphSpawnPointConfig_SpawnStyle : ::System::Int32
	{
		TeleportToSplineStartPoint = 0,
		TeleportToSplineEndPoint = 1,
		MoveToSplineStartPoint = 3,
		TeleportToSplineNearestPoint = 2,
		MoveToSplineNearestPoint = 5,
		MoveToSplineEndPoint = 4,
		MoveBlendWithSplinePoints = 6,
	};
}
