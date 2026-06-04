#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UISkillIndexMask_TypeDefinitionIndex = 67275;

	enum class UISkillIndexMask : ::System::Int32
	{
		Attack = 1,
		Skill = 2,
		Ultra = 4,
		CancelSkill = 8,
		PlayerSubSkill01 = 16,
		PlayerSubSkill02 = 32,
		MenuSubSkill = 64,
		DefaultActiveSkill = 128,
		AllSkill = 268435455,
	};
}
