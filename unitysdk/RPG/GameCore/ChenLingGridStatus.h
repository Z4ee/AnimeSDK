#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingGridStatus_TypeDefinitionIndex = 10656;

	enum class ChenLingGridStatus : ::System::Int32
	{
		Empty = 0,
		Soldier = 1,
		Building = 2,
	};
}
