#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleTitleCondition_TypeDefinitionIndex = 11469;

	enum class MarbleTitleCondition : ::System::Int32
	{
		None = 0,
		Max = 1,
		Min = 2,
		Equal = 3,
		EqualOrGreater = 4,
		First = 5,
	};
}
