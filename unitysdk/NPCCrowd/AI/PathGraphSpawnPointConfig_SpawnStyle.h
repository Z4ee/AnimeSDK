#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSpawnPointConfig_SpawnStyle_TypeDefinitionIndex = 74064;

	enum class PathGraphSpawnPointConfig_SpawnStyle : ::System::Int32
	{
		MoveToSplineEndPoint = 4,
		MoveToSplineNearestPoint = 5,
		TeleportToSplineNearestPoint = 2,
		TeleportToSplineEndPoint = 1,
		TeleportToSplineStartPoint = 0,
		MoveToSplineStartPoint = 3,
		MoveBlendWithSplinePoints = 6,
	};
}
