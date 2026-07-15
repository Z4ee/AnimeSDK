#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillLayoutKey_TypeDefinitionIndex = 23757;

	enum class SkillLayoutKey : ::System::Int32
	{
		Undefined = 0,
		Normal = 1,
		Skill = 2,
	};
}
