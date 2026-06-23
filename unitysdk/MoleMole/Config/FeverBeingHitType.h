#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int FeverBeingHitType_TypeDefinitionIndex = 53564;

	enum class FeverBeingHitType : ::System::Int32
	{
		HitGroundLight = 2,
		Mute = 0,
		HitGroundHeavy = 3,
		HitSkyFly = 4,
		Shake = 1,
	};
}
