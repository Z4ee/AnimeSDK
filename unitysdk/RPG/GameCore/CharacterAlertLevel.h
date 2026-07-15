#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterAlertLevel_TypeDefinitionIndex = 10094;

	enum class CharacterAlertLevel : ::System::Int32
	{
		None = 0,
		AlertNormal = 1,
		AlertFound = 2,
	};
}
