#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ChallengeSubTypeMonsterKill_EChallengeSubTypeKillType_TypeDefinitionIndex = 85309;

	enum class ChallengeSubTypeMonsterKill_EChallengeSubTypeKillType : ::System::Int16
	{
		QTE_Kill = 1,
		DESTRUCTION_KILL = 6,
		TRAP_KILL = 8,
		ASSAULT_AID_KILL = 7,
		ULTRA_KILL = 2,
		None = -1,
		COUNTER_KILL = 9,
		BRANCH_KILL = 3,
		ANY_SKILL_KILL = 5,
		FLOATING_KILL = 4,
	};
}
