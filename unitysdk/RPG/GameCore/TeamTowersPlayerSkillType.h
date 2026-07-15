#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamTowersPlayerSkillType_TypeDefinitionIndex = 11993;

	enum class TeamTowersPlayerSkillType : ::System::Int32
	{
		Invalid = 0,
		ActiveSkill = 1,
		PassiveSkill = 2,
	};
}
