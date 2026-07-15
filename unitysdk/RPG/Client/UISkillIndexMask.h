#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UISkillIndexMask_TypeDefinitionIndex = 68739;

	enum class UISkillIndexMask : ::System::Int32
	{
		Attack = 1,
		Skill = 2,
		Ultra = 4,
		CancelSkill = 8,
		AssistSkill = 16,
		PlayerSubSkill01 = 32,
		PlayerSubSkill02 = 64,
		MenuSubSkill = 128,
		DefaultActiveSkill = 256,
		AllSkill = 268435455,
	};
}
