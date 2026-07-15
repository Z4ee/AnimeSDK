#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournAreaGroupID_TypeDefinitionIndex = 14353;

	enum class RogueTournAreaGroupID : ::System::Int32
	{
		None = 0,
		Guide = 1,
		Formal = 2,
		WeekChallenge = 3,
	};
}
