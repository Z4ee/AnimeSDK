#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int TurnBattleUnitQueryFilter_TypeDefinitionIndex = 88716;

	enum class TurnBattleUnitQueryFilter : ::System::Int32
	{
		All = 0,
		EnemyNoDummyNoTemp = 2,
		AllyNoDummyNoTemp = 1,
	};
}
