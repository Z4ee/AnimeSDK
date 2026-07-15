#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AdventurePhase_SameMapSwitchPhase_TypeDefinitionIndex = 57437;

	enum class AdventurePhase_SameMapSwitchPhase : ::System::Int32
	{
		None = 0,
		PreSwitch = 1,
		Switching = 2,
	};
}
