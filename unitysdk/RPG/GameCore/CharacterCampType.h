#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterCampType_TypeDefinitionIndex = 12221;

	enum class CharacterCampType : ::System::Int32
	{
		Avatar = 0,
		Monster = 1,
	};
}
