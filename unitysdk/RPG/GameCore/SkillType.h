#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillType_TypeDefinitionIndex = 17443;

	enum class SkillType : ::System::Int32
	{
		Normal = 0,
		Skill = 1,
		Ultra = 2,
		Servant = 3,
		Elation = 4,
		Assist = 5,
		Passive = 6,
		Maze = 7,
		Undefine = 8,
		Count = 9,
	};
}
