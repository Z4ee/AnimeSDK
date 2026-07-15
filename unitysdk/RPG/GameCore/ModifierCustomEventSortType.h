#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierCustomEventSortType_TypeDefinitionIndex = 16416;

	enum class ModifierCustomEventSortType : ::System::Int32
	{
		Undefine = 0,
		Shuffle = 1,
		Phase1Priority = 2,
		EnterBattlePriority = 3,
	};
}
