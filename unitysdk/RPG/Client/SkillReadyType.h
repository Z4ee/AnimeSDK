#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int SkillReadyType_TypeDefinitionIndex = 71936;

	enum class SkillReadyType : ::System::Int32
	{
		None = 0,
		Start = 1,
		Skill1ToSkill2 = 2,
		Skill2ToSkill1 = 3,
	};
}
