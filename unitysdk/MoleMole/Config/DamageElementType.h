#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int DamageElementType_TypeDefinitionIndex = 53604;

	enum class DamageElementType : ::System::Int32
	{
		ElementAll = 210,
		Wind = 204,
		None = 0,
		Elec = 203,
		Physics = 200,
		Ice = 202,
		Ether = 205,
		Fire = 201,
	};
}
