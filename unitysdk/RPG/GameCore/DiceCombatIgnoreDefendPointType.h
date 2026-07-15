#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatIgnoreDefendPointType_TypeDefinitionIndex = 15436;

	enum class DiceCombatIgnoreDefendPointType : ::System::Int32
	{
		None = 0,
		All = 1,
		Partial = 2,
	};
}
