#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int SideScrollingScoreGetType_TypeDefinitionIndex = 45918;

	enum class SideScrollingScoreGetType : ::System::Int32
	{
		KillMonsterElite = 3,
		ExPunch = 5,
		KillMonsterNormal = 1,
		PerfectDodge = 4,
		None = 0,
		KillMonsterNormalLevelUp = 2,
	};
}
