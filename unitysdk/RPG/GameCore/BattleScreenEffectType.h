#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleScreenEffectType_TypeDefinitionIndex = 23858;

	enum class BattleScreenEffectType : ::System::Int32
	{
		CinemaBlackScreen = 0,
		ChallengeStoryFever = 1,
		FateArcherProjectionProgressInitial = 2,
		FateArcherProjectionProgressUltimate = 3,
		FightFest = 4,
		FeverTime = 5,
		Common = 6,
		SilverWolf999 = 7,
	};
}
