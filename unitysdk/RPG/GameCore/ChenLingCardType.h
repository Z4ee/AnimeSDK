#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingCardType_TypeDefinitionIndex = 10650;

	enum class ChenLingCardType : ::System::Int32
	{
		None = 0,
		Soldier = 1,
		Building = 2,
		Magic = 3,
		Enchant = 4,
	};
}
