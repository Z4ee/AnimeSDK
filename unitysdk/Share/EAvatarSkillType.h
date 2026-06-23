#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EAvatarSkillType_TypeDefinitionIndex = 13254;

	enum class EAvatarSkillType : ::System::Int16
	{
		Evade = 2,
		CommonAttack = 0,
		UniqueSkill = 4,
		EnumCount = 7,
		SpecialAttack = 1,
		AssistSkill = 6,
		CoreSkill = 5,
		CooperateSkill = 3,
	};
}
