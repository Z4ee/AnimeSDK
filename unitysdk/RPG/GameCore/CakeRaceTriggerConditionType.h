#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceTriggerConditionType_TypeDefinitionIndex = 10628;

	enum class CakeRaceTriggerConditionType : ::System::Int32
	{
		MainCatIDIs = 0,
		SubCatIDIs = 1,
		MainCatRankIs = 2,
		MainCatMoveStateIs = 3,
		MainCatLastMoveStateIs = 4,
		CatContainAll = 5,
		FieldIDIs = 6,
		SectionIndexIs = 7,
		TheCatGetSupportedEquals = 8,
		TheCatGetSupportedGreaterThan = 9,
		MostPopularCatUnique = 10,
		BattleItemIDIs = 11,
		GroundedCount = 12,
		FieldEffectID = 13,
		MainCatGetSupportedEquals = 14,
		MainCatGetSupportedGreaterThan = 15,
	};
}
