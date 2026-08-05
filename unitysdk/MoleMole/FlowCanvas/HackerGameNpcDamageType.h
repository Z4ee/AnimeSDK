#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameNpcDamageType_TypeDefinitionIndex = 58032;

	enum class HackerGameNpcDamageType : ::System::Int32
	{
		None = 0,
		DamageWhenEscape = 2,
		Damage = 1,
	};
}
