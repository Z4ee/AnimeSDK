#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::RoadRash
{
	inline static constexpr unsigned int ERoadRashFOVChannel_TypeDefinitionIndex = 41281;

	enum class ERoadRashFOVChannel : ::System::Int32
	{
		ReleaseCharge = 0,
		Slam = 1,
		Ultimate = 2,
		LaunchAccel = 3,
		SpeedBoost = 4,
		SlamImpactAccel = 5,
		UltimateQTE = 6,
	};
}
