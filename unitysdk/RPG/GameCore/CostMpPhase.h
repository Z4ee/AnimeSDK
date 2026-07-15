#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CostMpPhase_TypeDefinitionIndex = 16810;

	enum class CostMpPhase : ::System::Int32
	{
		OnUse = 0,
		OnHitEnemy = 1,
		OnFirstHitEnemy = 2,
	};
}
