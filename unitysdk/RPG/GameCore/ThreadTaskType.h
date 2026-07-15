#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ThreadTaskType_TypeDefinitionIndex = 10447;

	enum class ThreadTaskType : ::System::Int32
	{
		Invalid = 0,
		SpringBone = 1,
		StreamingCameraOccluder = 2,
		Streaming = 3,
		StreamingVolume = 4,
		TickLod = 5,
		TAMonoTickLod = 6,
		IK = 7,
		AdventureMovement = 8,
		GroundDetection = 9,
		CityAtmosphere = 10,
		FiveDimLod = 11,
	};
}
