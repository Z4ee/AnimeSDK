#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DamageStanceOption_TypeDefinitionIndex = 23816;

	enum class DamageStanceOption : ::System::UInt32
	{
		None = 0x0,
		ForceStanceDamage = 0x1,
		IgnoreAttackerAddRatio = 0x2,
	};
}
