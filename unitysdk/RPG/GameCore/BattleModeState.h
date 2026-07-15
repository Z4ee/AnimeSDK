#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleModeState_TypeDefinitionIndex = 51242;

	enum class BattleModeState : ::System::Int32
	{
		None = 0,
		Init = 1,
		Load = 2,
		Running = 3,
		Finish = 4,
		Stop = 5,
	};
}
