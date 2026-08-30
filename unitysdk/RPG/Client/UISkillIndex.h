#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UISkillIndex_TypeDefinitionIndex = 71937;

	enum class UISkillIndex : ::System::Int32
	{
		Invalid = -1,
		Attack = 0,
		Skill = 1,
		Ultra = 2,
		CancelSkill = 3,
		AssistSkill = 4,
		PlayerSubSkill01 = 5,
		PlayerSubSkill02 = 6,
		MenuSubSkill = 7,
		DefaultActiveSkill = 8,
	};
}
