#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournMode_TypeDefinitionIndex = 10273;

	enum class RogueTournMode : ::System::Int32
	{
		Permanent = 0,
		Tourn1 = 1,
		Tourn2 = 2,
		Tourn3 = 3,
	};
}
