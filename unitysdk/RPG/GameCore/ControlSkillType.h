#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ControlSkillType_TypeDefinitionIndex = 22528;

	enum class ControlSkillType : ::System::Int32
	{
		ControlSkill01 = 0,
		ControlSkill02 = 1,
		ControlSkill03 = 2,
		ControlSkill04 = 3,
		ControlSkill11 = 4,
		ControlSkill21 = 5,
		_Count = 6,
	};
}
