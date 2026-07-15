#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int TRFPhase_TypeDefinitionIndex = 40263;

	enum class TRFPhase : ::System::Int32
	{
		Ready = 0,
		FreeOp = 1,
		Moving = 2,
		BulletFly = 3,
		CloneFallOut = 4,
		Teleport = 5,
		TeleportLoop = 6,
		Ignite = 7,
		Finished = 8,
		Quit = 9,
		Failing = 10,
		Failed = 11,
	};
}
