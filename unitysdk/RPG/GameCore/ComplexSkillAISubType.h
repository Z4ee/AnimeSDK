#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISubType_TypeDefinitionIndex = 51914;

	enum class ComplexSkillAISubType : ::System::Int32
	{
		Undefined = 0,
		PreCheck = 1,
		SkillTargetSelect = 2,
		AutoLock = 3,
	};
}
