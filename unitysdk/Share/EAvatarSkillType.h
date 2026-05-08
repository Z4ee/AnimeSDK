#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EAvatarSkillType_TypeDefinitionIndex = 13355;

	enum class EAvatarSkillType : ::System::Int16
	{
		AssistSkill = 6,
		EnumCount = 7,
		UniqueSkill = 4,
		CooperateSkill = 3,
		SpecialAttack = 1,
		CoreSkill = 5,
		Evade = 2,
		CommonAttack = 0,
	};
}
