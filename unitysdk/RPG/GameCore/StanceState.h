#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int StanceState_TypeDefinitionIndex = 55178;

	enum class StanceState : ::System::Int32
	{
		Normal = 0,
		Break = 1,
		RedStance = 2,
		RedStanceBreak = 3,
	};
}
