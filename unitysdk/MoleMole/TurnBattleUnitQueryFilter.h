#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int TurnBattleUnitQueryFilter_TypeDefinitionIndex = 55399;

	enum class TurnBattleUnitQueryFilter : ::System::Int32
	{
		EnemyNoDummyNoTemp = 2,
		AllyNoDummyNoTemp = 1,
		All = 0,
	};
}
