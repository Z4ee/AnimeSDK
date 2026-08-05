#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int LevelShootGameConfig_MoveType_TypeDefinitionIndex = 52700;

	enum class LevelShootGameConfig_MoveType : ::System::Int32
	{
		NotMoving = 0,
		Loop = 1,
		ArriveTargetStop = 4,
		OppositeLoop = 2,
		ArriveTargetDestroy = 3,
	};
}
