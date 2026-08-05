#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int BuffAttackPropertType_TypeDefinitionIndex = 41083;

	enum class BuffAttackPropertType : ::System::Int32
	{
		DamageType = 0,
		SpecialType = 1,
		HitType = 2,
	};
}
