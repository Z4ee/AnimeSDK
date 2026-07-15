#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelAttributeSelectorType_TypeDefinitionIndex = 15285;

	enum class ChimeraDuelAttributeSelectorType : ::System::Int32
	{
		None = 0,
		Attack = 1,
		HP = 2,
		Status = 3,
		Probability = 4,
		InitialAttack = 5,
		InitialHP = 6,
		Rarity = 7,
		GainedExp = 8,
		ChimeraID = 9,
		UniqueID = 10,
	};
}
