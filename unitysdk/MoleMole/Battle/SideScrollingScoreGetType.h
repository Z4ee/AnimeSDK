#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int SideScrollingScoreGetType_TypeDefinitionIndex = 61208;

	enum class SideScrollingScoreGetType : ::System::Int32
	{
		None = 0,
		PerfectDodge = 4,
		ExPunch = 5,
		KillMonsterNormalLevelUp = 2,
		KillMonsterNormal = 1,
		KillMonsterElite = 3,
	};
}
