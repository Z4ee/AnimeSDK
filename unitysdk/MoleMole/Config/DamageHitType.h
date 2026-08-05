#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int DamageHitType_TypeDefinitionIndex = 88759;

	enum class DamageHitType : ::System::Int32
	{
		Punch = 102,
		None = 0,
		Cut = 101,
		Pierce = 103,
	};
}
