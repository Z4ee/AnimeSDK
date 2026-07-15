#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenEffectType_TypeDefinitionIndex = 11210;

	enum class HipplenEffectType : ::System::Int32
	{
		None = 0,
		StatChange = 1,
		StatChangeAddition = 2,
		StatGetRatio = 3,
		StatReduceRatio = 4,
		SpecificWorkAdditionStat = 5,
		IncidentWorkReplaceOption = 6,
		MiniGameAddGrade = 7,
		CarryGoodsMiniGameParamChange = 9,
		SeekGoodsMiniGameParamChange = 10,
		CountChimeraMiniGameParamChange = 11,
		LeftEnergyTrans = 12,
		OverflowEnergyTrans = 13,
		BuffStatChange = 14,
	};
}
