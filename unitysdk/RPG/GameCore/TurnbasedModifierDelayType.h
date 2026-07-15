#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnbasedModifierDelayType_TypeDefinitionIndex = 55183;

	enum class TurnbasedModifierDelayType : ::System::Int32
	{
		Active = 0,
		Readd = 1,
	};
}
