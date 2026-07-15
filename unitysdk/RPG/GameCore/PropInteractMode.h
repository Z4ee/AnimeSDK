#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropInteractMode_TypeDefinitionIndex = 10213;

	enum class PropInteractMode : ::System::Int32
	{
		FactToProp = 1,
		LockControl = 2,
		OpenUI = 3,
		UsePose01 = 4,
		UsePose02 = 5,
		UseInteractiveProp = 6,
		UsePoseWithoutAnim = 7,
		UseBirdCollection = 8,
		PushCartoonVase = 9,
		GachaMachine01 = 10,
		UsePose03 = 11,
	};
}
