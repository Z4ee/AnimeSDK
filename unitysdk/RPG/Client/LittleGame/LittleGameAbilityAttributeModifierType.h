#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int LittleGameAbilityAttributeModifierType_TypeDefinitionIndex = 39542;

	enum class LittleGameAbilityAttributeModifierType : ::System::Int32
	{
		Add = 0,
		Sub = 1,
		Mul = 2,
		Div = 3,
	};
}
