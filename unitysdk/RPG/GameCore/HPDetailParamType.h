#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HPDetailParamType_TypeDefinitionIndex = 23810;

	enum class HPDetailParamType : ::System::Int32
	{
		MaxHP = 0,
		CurrentHP = 1,
		LoseHP = 2,
		BaseHP = 3,
		HPRatio = 4,
		LoseHPRatio = 5,
		MaxHPMulRatio = 6,
		CurrentHPMulRatio = 7,
		BaseHPMulRatio = 8,
	};
}
