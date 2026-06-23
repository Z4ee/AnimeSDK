#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameNpcDamageType_TypeDefinitionIndex = 46841;

	enum class HackerGameNpcDamageType : ::System::Int32
	{
		Damage = 1,
		None = 0,
		DamageWhenEscape = 2,
	};
}
