#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicUnitCategory_TypeDefinitionIndex = 10259;

	enum class RogueMagicUnitCategory : ::System::Int32
	{
		None = 0,
		Common = 1,
		Ultra = 4,
	};
}
