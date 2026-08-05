#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AttackEffectConfigType_TypeDefinitionIndex = 90179;

	enum class AttackEffectConfigType : ::System::Int32
	{
		Custom = 0,
		Standard = 1,
	};
}
