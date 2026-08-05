#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAbilityTargetData_ValueType_TypeDefinitionIndex = 82872;

	enum class ConfigAbilityTargetData_ValueType : ::System::Int32
	{
		Null = 0,
		MultiTargettingAbilityTarget = 7,
		RangeRandomEnemyAbilityTarget = 2,
		SummonByTagAbilityTarget = 3,
		SummonerAbilityTarget = 8,
		TelerportSelectionTarget = 10,
		TimelineAbilityTarget = 9,
		EntityTypeGroupAbilityTarget = 6,
		RangeEnemyAbilityTarget = 1,
		CommonAbilityTarget = 4,
		EntityTypeAbilityTarget = 5,
	};
}
