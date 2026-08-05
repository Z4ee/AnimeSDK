#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int SurfVehicleExtraEffectFlags_TypeDefinitionIndex = 84500;

	enum class SurfVehicleExtraEffectFlags : ::System::Int32
	{
		DebuffImmune = 1,
		BuffProlong = 2,
		None = 0,
	};
}
