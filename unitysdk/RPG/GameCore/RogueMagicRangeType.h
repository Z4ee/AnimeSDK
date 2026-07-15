#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicRangeType_TypeDefinitionIndex = 10264;

	enum class RogueMagicRangeType : ::System::Int32
	{
		None = 0,
		Eject = 1,
		Concentrate = 2,
		AOE = 3,
		Spread = 4,
	};
}
