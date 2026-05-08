#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int FeverBeingHitType_TypeDefinitionIndex = 75328;

	enum class FeverBeingHitType : ::System::Int32
	{
		Mute = 0,
		HitSkyFly = 4,
		Shake = 1,
		HitGroundLight = 2,
		HitGroundHeavy = 3,
	};
}
