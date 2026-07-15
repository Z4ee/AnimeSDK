#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageChallengeType_TypeDefinitionIndex = 10070;

	enum class StageChallengeType : ::System::Int32
	{
		Unknown = 0,
		Pass = 1,
		AliveCnt = 2,
		DeathCnt = 3,
		TurnCnt = 4,
		UltraAttackCnt = 8,
	};
}
