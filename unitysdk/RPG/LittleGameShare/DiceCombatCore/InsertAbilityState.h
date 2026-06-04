#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::DiceCombatCore
{
	inline static constexpr unsigned int InsertAbilityState_TypeDefinitionIndex = 34496;

	enum class InsertAbilityState : ::System::Int32
	{
		Ready = 0,
		Running = 1,
		Finished = 2,
	};
}
