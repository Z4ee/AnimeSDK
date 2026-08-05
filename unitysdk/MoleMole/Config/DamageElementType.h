#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int DamageElementType_TypeDefinitionIndex = 50729;

	enum class DamageElementType : ::System::Int32
	{
		Physics = 200,
		Fire = 201,
		Wind = 204,
		Elec = 203,
		None = 0,
		ElementAll = 210,
		Lumen = 300,
		Ice = 202,
		Ether = 205,
	};
}
