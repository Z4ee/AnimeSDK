#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierUIPosition_TypeDefinitionIndex = 17510;

	enum class ModifierUIPosition : ::System::Int32
	{
		None = 0,
		UI_TOP = 1,
		UI_Middle = 2,
	};
}
