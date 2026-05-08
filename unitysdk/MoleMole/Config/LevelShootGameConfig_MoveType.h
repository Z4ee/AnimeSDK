#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int LevelShootGameConfig_MoveType_TypeDefinitionIndex = 58590;

	enum class LevelShootGameConfig_MoveType : ::System::Int32
	{
		OppositeLoop = 2,
		Loop = 1,
		ArriveTargetDestroy = 3,
		NotMoving = 0,
		ArriveTargetStop = 4,
	};
}
