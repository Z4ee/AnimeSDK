#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int LevelShootGameConfig_MoveType_TypeDefinitionIndex = 70556;

	enum class LevelShootGameConfig_MoveType : ::System::Int32
	{
		NotMoving = 0,
		ArriveTargetStop = 4,
		ArriveTargetDestroy = 3,
		OppositeLoop = 2,
		Loop = 1,
	};
}
