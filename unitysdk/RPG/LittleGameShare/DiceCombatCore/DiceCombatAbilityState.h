#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::DiceCombatCore
{
	inline static constexpr unsigned int DiceCombatAbilityState_TypeDefinitionIndex = 34915;

	enum class DiceCombatAbilityState : ::System::Int32
	{
		Ready = 0,
		Running = 1,
	};
}
