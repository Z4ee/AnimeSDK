#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleCameraMode_TypeDefinitionIndex = 23933;

	enum class RtBattleCameraMode : ::System::Int32
	{
		FixedFocus = 0,
		TeamCharacterLoopSwitch = 1,
		AllCharacterLoopSwitch = 2,
	};
}
