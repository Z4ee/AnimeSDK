#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int SideScrollingHeatKillMonsterType_TypeDefinitionIndex = 51708;

	enum class SideScrollingHeatKillMonsterType : ::System::Int32
	{
		Normal = 1,
		NormalLevelUp = 2,
		None = 0,
		Elite = 3,
	};
}
