#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::DiceCombatCore
{
	inline static constexpr unsigned int DiceCombatTaskState_TypeDefinitionIndex = 34460;

	enum class DiceCombatTaskState : ::System::Int32
	{
		Ready = 0,
		Running = 1,
		Success = 2,
		Fail = 3,
	};
}
