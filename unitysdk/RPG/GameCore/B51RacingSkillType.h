#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int B51RacingSkillType_TypeDefinitionIndex = 10931;

	enum class B51RacingSkillType : ::System::Int32
	{
		None = 0,
		Active = 1,
		Ultimate = 2,
		Passive = 3,
		Attribute = 4,
	};
}
