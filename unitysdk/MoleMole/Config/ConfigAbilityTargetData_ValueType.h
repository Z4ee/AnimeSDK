#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAbilityTargetData_ValueType_TypeDefinitionIndex = 43338;

	enum class ConfigAbilityTargetData_ValueType : ::System::Int32
	{
		EntityTypeGroupAbilityTarget = 6,
		EntityTypeAbilityTarget = 5,
		RangeRandomEnemyAbilityTarget = 2,
		SummonerAbilityTarget = 8,
		RangeEnemyAbilityTarget = 1,
		SummonByTagAbilityTarget = 3,
		TimelineAbilityTarget = 9,
		MultiTargettingAbilityTarget = 7,
		CommonAbilityTarget = 4,
		Null = 0,
		TelerportSelectionTarget = 10,
	};
}
