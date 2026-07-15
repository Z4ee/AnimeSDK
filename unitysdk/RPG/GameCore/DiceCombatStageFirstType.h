#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatStageFirstType_TypeDefinitionIndex = 10876;

	enum class DiceCombatStageFirstType : ::System::Int32
	{
		Player = 0,
		Enemy = 1,
		Random = 2,
	};
}
