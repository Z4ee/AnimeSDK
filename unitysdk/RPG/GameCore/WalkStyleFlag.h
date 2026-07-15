#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int WalkStyleFlag_TypeDefinitionIndex = 10093;

	enum class WalkStyleFlag : ::System::Int32
	{
		Default = 0,
		Walk1 = 1,
		Walk2 = 2,
		Walk3 = 3,
		Walk4 = 4,
		Count = 5,
	};
}
