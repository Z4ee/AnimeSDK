#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonMonsterUsage_TypeDefinitionIndex = 24359;

	enum class SummonMonsterUsage : ::System::Int32
	{
		NormalSummon = 0,
		FormChange = 1,
	};
}
