#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TreasureDungeonGridBuffType_TypeDefinitionIndex = 12044;

	enum class TreasureDungeonGridBuffType : ::System::Int32
	{
		None = 0,
		CostExploreAfterAction = 1,
		SummonAfterAction = 2,
		EnhanceAfterAction = 3,
		EnhanceByAroundUnopenGrid = 4,
		AuraAroundMazeBuff = 5,
		ReplaceAfterAction = 6,
	};
}
