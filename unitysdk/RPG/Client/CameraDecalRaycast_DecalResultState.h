#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CameraDecalRaycast_DecalResultState_TypeDefinitionIndex = 60291;

	enum class CameraDecalRaycast_DecalResultState : ::System::Int32
	{
		Unknown = 0,
		Success = 1,
		FailureTooFar = 2,
		FailureVariance = 3,
		FailureMissHit = 4,
		FailureBlock = 5,
		FailureAirWall = 6,
		FailureMaxCount = 7,
	};
}
