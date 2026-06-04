#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeployPuzzleBasePointActionType_TypeDefinitionIndex = 23243;

	enum class DeployPuzzleBasePointActionType : ::System::Int32
	{
		PickUp = 0,
		Place = 1,
		Swap = 2,
	};
}
