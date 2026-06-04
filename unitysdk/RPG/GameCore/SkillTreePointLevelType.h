#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillTreePointLevelType_TypeDefinitionIndex = 17244;

	enum class SkillTreePointLevelType : ::System::Int32
	{
		CustomLevel = 0,
		MaxLevel = 1,
		MaxWithCharacterLevel = 2,
	};
}
