#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int SurfVehicleExtraEffectFlags_TypeDefinitionIndex = 55634;

	enum class SurfVehicleExtraEffectFlags : ::System::Int32
	{
		None = 0,
		BuffProlong = 2,
		DebuffImmune = 1,
	};
}
