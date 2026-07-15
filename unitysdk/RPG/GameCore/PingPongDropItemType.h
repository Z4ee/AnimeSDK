#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongDropItemType_TypeDefinitionIndex = 16310;

	enum class PingPongDropItemType : ::System::Int32
	{
		HP = 0,
		MP = 1,
		FireSkill = 2,
		IceSkill = 3,
		LightningSkill = 4,
		RacketLengthIncrease = 5,
		RacketLengthDecrease = 6,
		RacketSpeedUp = 7,
		RacketSpeedDown = 8,
		BallSplit = 9,
	};
}
