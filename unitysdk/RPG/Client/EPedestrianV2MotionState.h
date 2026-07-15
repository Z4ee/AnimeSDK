#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int EPedestrianV2MotionState_TypeDefinitionIndex = 66200;

	enum class EPedestrianV2MotionState : ::System::Int32
	{
		None = 0,
		InRoad = 1,
		InIntersection = 2,
		InEscalator = 3,
		InCrosswalk = 4,
		InStation = 5,
		OutboundMechaWarehouse = 6,
		InboundMechaWarehouse = 7,
		InChenLingFactory = 8,
		InChenLingTribe = 9,
		InChenLingDrop = 10,
	};
}
