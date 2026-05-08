#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAttackPatternType_TypeDefinitionIndex = 65091;

	enum class ConfigAttackPatternType : ::System::Int32
	{
		AttackPatternList = 1,
		ContinuousAttackPatternList = 2,
		AttackPattern = 0,
	};
}
