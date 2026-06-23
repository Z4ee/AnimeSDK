#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int DamageElementType_TypeDefinitionIndex = 62719;

	enum class DamageElementType : ::System::Int32
	{
		Elec = 203,
		Ice = 202,
		Fire = 201,
		Ether = 205,
		Lumen = 300,
		ElementAll = 210,
		None = 0,
		Wind = 204,
		Physics = 200,
	};
}
