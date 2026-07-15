#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MultipleDropTypeConfig_TypeDefinitionIndex = 11069;

	enum class MultipleDropTypeConfig : ::System::Int32
	{
		None = 0,
		COCOON = 1,
		COCOON2 = 2,
		ELEMENT = 3,
		RELIC = 4,
		COCOON3 = 5,
		ROGUE = 6,
	};
}
