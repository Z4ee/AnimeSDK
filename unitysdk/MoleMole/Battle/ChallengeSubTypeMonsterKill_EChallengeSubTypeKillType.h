#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ChallengeSubTypeMonsterKill_EChallengeSubTypeKillType_TypeDefinitionIndex = 41241;

	enum class ChallengeSubTypeMonsterKill_EChallengeSubTypeKillType : ::System::Int16
	{
		COUNTER_KILL = 9,
		ANY_SKILL_KILL = 5,
		TRAP_KILL = 8,
		DESTRUCTION_KILL = 6,
		ULTRA_KILL = 2,
		FLOATING_KILL = 4,
		ASSAULT_AID_KILL = 7,
		BRANCH_KILL = 3,
		None = -1,
		QTE_Kill = 1,
	};
}
