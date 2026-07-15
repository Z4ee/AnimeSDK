#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HealDataPropertyType_TypeDefinitionIndex = 23890;

	enum class HealDataPropertyType : ::System::Int32
	{
		Result_HealAmount = 0,
		Result_HealAmountMulRatio = 1,
		Result_HealRealAmount = 2,
		Result_HealRealAmountMulRatio = 3,
		Result_OverflowHealAmount = 4,
		Result_HealRatio = 5,
	};
}
