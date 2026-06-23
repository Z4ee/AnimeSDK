#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int TurnBattleUnitQueryKey_TypeDefinitionIndex = 75302;

	enum class TurnBattleUnitQueryKey : ::System::Int32
	{
		FastestSortableUnit = 1,
		SlowestSortableUnit = 2,
		All = 0,
	};
}
