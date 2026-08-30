#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DeployPuzzleStoneState_TypeDefinitionIndex = 78065;

	enum class DeployPuzzleStoneState : ::System::Int32
	{
		Invalid = 0,
		AttachedToStone = 1,
		HoldingByPlayer = 2,
	};
}
