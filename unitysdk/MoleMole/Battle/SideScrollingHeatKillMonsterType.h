#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int SideScrollingHeatKillMonsterType_TypeDefinitionIndex = 62600;

	enum class SideScrollingHeatKillMonsterType : ::System::Int32
	{
		Normal = 1,
		NormalLevelUp = 2,
		Elite = 3,
		None = 0,
	};
}
