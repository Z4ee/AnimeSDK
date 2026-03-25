#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AttackTotalDamageSumAlgo_TypeDefinitionIndex = 21834;

	enum class AttackTotalDamageSumAlgo : ::System::Int32
	{
		SumAll = 0,
		IgnoreConvert = 1,
	};
}
