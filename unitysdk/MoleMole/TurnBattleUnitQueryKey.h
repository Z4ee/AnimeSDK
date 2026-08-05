#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int TurnBattleUnitQueryKey_TypeDefinitionIndex = 51330;

	enum class TurnBattleUnitQueryKey : ::System::Int32
	{
		FastestSortableUnit = 1,
		SlowestSortableUnit = 2,
		All = 0,
	};
}
