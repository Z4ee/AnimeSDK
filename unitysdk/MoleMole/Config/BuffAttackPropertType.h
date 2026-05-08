#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int BuffAttackPropertType_TypeDefinitionIndex = 65782;

	enum class BuffAttackPropertType : ::System::Int32
	{
		DamageType = 0,
		HitType = 2,
		SpecialType = 1,
	};
}
