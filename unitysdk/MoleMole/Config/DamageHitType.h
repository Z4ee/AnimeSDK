#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int DamageHitType_TypeDefinitionIndex = 66111;

	enum class DamageHitType : ::System::Int32
	{
		Pierce = 103,
		Cut = 101,
		None = 0,
		Punch = 102,
	};
}
