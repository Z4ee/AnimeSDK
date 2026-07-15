#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityTargetType_TypeDefinitionIndex = 15032;

	enum class AbilityTargetType : ::System::Int32
	{
		Unknow = 0,
		Caster = 1,
		SkillPointEntity = 2,
		AllTeamMember = 3,
		AllEnemy = 4,
		StanceBreakTargetEntity = 5,
		ExclusiveSkillTargetEntity = 6,
		InherentTargetEntity = 7,
		SkillTargetEntityList = 8,
		SkillSubTargetEntityList = 9,
		SkillPointEntityOrNone = 10,
		AllLightTeamMember = 11,
		AllDarkTeamMember = 12,
	};
}
