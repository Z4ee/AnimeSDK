#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int AcquireFiveDimPlayerBeatBackReason_TypeDefinitionIndex = 40837;

	enum class AcquireFiveDimPlayerBeatBackReason : ::System::Int32
	{
		None = 0,
		Action = 1,
		FloatingSpirit = 2,
		Gecko = 3,
		GarbageBin = 4,
		Missile = 5,
		SimpleProjectile = 6,
		EvilSmile = 7,
		Grenadier = 8,
		SimpleHitBox = 9,
	};
}
