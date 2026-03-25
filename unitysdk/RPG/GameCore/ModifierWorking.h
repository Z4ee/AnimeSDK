#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierWorking_TypeDefinitionIndex = 16721;

	enum class ModifierWorking : ::System::Int32
	{
		Unknow = 0,
		OwnerTurn = 1,
		AnyOneTurn = 2,
	};
}
