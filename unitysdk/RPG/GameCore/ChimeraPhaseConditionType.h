#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraPhaseConditionType_TypeDefinitionIndex = 15276;

	enum class ChimeraPhaseConditionType : ::System::Int32
	{
		None = 0,
		HPGreater = 1,
		HPLess = 2,
	};
}
