#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAbilityTargetData_ValueType_TypeDefinitionIndex = 39977;

	enum class ConfigAbilityTargetData_ValueType : ::System::Int32
	{
		SummonerAbilityTarget = 8,
		SummonByTagAbilityTarget = 3,
		EntityTypeAbilityTarget = 5,
		TelerportSelectionTarget = 10,
		Null = 0,
		MultiTargettingAbilityTarget = 7,
		EntityTypeGroupAbilityTarget = 6,
		RangeEnemyAbilityTarget = 1,
		TimelineAbilityTarget = 9,
		CommonAbilityTarget = 4,
		RangeRandomEnemyAbilityTarget = 2,
	};
}
