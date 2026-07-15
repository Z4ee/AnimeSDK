#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RedirectSkillTargetAffectTeam_TypeDefinitionIndex = 23896;

	enum class RedirectSkillTargetAffectTeam : ::System::Int32
	{
		All = 0,
		SameTeam = 1,
		EnemyTeam = 2,
	};
}
