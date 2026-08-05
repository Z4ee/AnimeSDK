#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EAvatarSkillType_TypeDefinitionIndex = 14191;

	enum class EAvatarSkillType : ::System::Int16
	{
		AssistSkill = 6,
		CoreSkill = 5,
		CooperateSkill = 3,
		CommonAttack = 0,
		Evade = 2,
		EnumCount = 7,
		SpecialAttack = 1,
		UniqueSkill = 4,
	};
}
