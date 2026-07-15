#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FarmTypeConfig_TypeDefinitionIndex = 12077;

	enum class FarmTypeConfig : ::System::Int32
	{
		NONE = 0,
		COCOON = 1,
		COCOON2 = 2,
		ELEMENT = 3,
		RELIC = 4,
		COCOON3 = 5,
		COCOON_AVATAR_EXP = 6,
		COCOON_EQUIPMENT_EXP = 7,
		COCOON_COIN = 8,
	};
}
