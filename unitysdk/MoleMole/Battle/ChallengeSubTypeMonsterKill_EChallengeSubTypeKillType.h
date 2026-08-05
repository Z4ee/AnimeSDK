#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ChallengeSubTypeMonsterKill_EChallengeSubTypeKillType_TypeDefinitionIndex = 70247;

	enum class ChallengeSubTypeMonsterKill_EChallengeSubTypeKillType : ::System::Int16
	{
		BRANCH_KILL = 3,
		FLOATING_KILL = 4,
		QTE_Kill = 1,
		TRAP_KILL = 8,
		ULTRA_KILL = 2,
		COUNTER_KILL = 9,
		ASSAULT_AID_KILL = 7,
		ANY_SKILL_KILL = 5,
		None = -1,
		DESTRUCTION_KILL = 6,
	};
}
