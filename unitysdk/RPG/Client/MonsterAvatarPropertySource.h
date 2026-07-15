#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MonsterAvatarPropertySource_TypeDefinitionIndex = 59470;

	enum class MonsterAvatarPropertySource : ::System::Int32
	{
		Skill = 0,
		SkillItemCore = 1,
	};
}
