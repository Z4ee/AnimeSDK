#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatCollectionPageParam_TabType_TypeDefinitionIndex = 69883;

	enum class DiceCombatCollectionPageParam_TabType : ::System::Int32
	{
		None = 0,
		Card = 1,
		Dice = 2,
	};
}
