#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int SideScrollingScoreGetType_TypeDefinitionIndex = 60495;

	enum class SideScrollingScoreGetType : ::System::Int32
	{
		KillMonsterElite = 3,
		PerfectDodge = 4,
		KillMonsterNormalLevelUp = 2,
		None = 0,
		KillMonsterNormal = 1,
		ExPunch = 5,
	};
}
