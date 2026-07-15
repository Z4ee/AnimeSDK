#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterFormationType_TypeDefinitionIndex = 23771;

	enum class CharacterFormationType : ::System::Int32
	{
		Fixed = 0,
		Team = 1,
		Anchor = 2,
		Follow = 3,
		TeamCenterFollow = 4,
		CustomRefresh = 5,
		Unknown = 6,
	};
}
