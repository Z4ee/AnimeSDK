#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UISkillIndex_TypeDefinitionIndex = 67274;

	enum class UISkillIndex : ::System::Int32
	{
		Invalid = -1,
		Attack = 0,
		Skill = 1,
		Ultra = 2,
		CancelSkill = 3,
		PlayerSubSkill01 = 4,
		PlayerSubSkill02 = 5,
		MenuSubSkill = 6,
		DefaultActiveSkill = 7,
	};
}
