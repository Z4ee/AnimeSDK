#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameNpcDamageType_TypeDefinitionIndex = 46426;

	enum class HackerGameNpcDamageType : ::System::Int32
	{
		DamageWhenEscape = 2,
		None = 0,
		Damage = 1,
	};
}
