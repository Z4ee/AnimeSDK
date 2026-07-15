#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TacticsCardType_TypeDefinitionIndex = 10918;

	enum class TacticsCardType : ::System::Int32
	{
		Normal = 0,
		Attack = 1,
		Defend = 2,
	};
}
