#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelValueSelectorType_TypeDefinitionIndex = 15332;

	enum class ChimeraDuelValueSelectorType : ::System::Int32
	{
		None = 0,
		Atk = 1,
		Hp = 3,
		Power = 5,
	};
}
