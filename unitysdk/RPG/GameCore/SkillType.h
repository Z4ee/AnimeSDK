#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillType_TypeDefinitionIndex = 17265;

	enum class SkillType : ::System::Int32
	{
		Normal = 0,
		Skill = 1,
		Ultra = 2,
		Servant = 3,
		Elation = 4,
		Passive = 5,
		Maze = 6,
		Undefine = 7,
		Count = 8,
	};
}
