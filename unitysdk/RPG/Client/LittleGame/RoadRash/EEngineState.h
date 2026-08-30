#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::RoadRash
{
	inline static constexpr unsigned int EEngineState_TypeDefinitionIndex = 41295;

	enum class EEngineState : ::System::Int32
	{
		None = 0,
		Default = 1,
		Charge = 2,
		ReleaseCharging = 3,
		SlamCast = 4,
		Slam = 5,
		Ultimate = 6,
		FireProjectileCast = 7,
		Reverse = 8,
	};
}
