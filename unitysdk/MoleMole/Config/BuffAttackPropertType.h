#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int BuffAttackPropertType_TypeDefinitionIndex = 74326;

	enum class BuffAttackPropertType : ::System::Int32
	{
		SpecialType = 1,
		DamageType = 0,
		HitType = 2,
	};
}
