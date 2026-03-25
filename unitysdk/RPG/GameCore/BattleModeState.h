#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleModeState_TypeDefinitionIndex = 45171;

	enum class BattleModeState : ::System::Int32
	{
		None = 0,
		Init = 1,
		Load = 2,
		Start = 3,
		Finish = 4,
		Stop = 5,
	};
}
