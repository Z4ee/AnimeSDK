#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicMode_TypeDefinitionIndex = 14044;

	enum class RelicMode : ::System::Int32
	{
		INVALID = 0,
		BASIC = 1,
		CUSTOM = 2,
	};
}
