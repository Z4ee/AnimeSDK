#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int SideScrollingHeatKillMonsterType_TypeDefinitionIndex = 60593;

	enum class SideScrollingHeatKillMonsterType : ::System::Int32
	{
		Normal = 1,
		None = 0,
		Elite = 3,
		NormalLevelUp = 2,
	};
}
