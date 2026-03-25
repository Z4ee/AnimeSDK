#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DeployPuzzleBaseState_TypeDefinitionIndex = 63967;

	enum class DeployPuzzleBaseState : ::System::Int32
	{
		Disabled = 0,
		Placed = 1,
		Wait = 2,
		Swap = 3,
	};
}
