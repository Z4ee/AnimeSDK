#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorAirHitType_TypeDefinitionIndex = 40332;

	enum class AnimatorAirHitType : ::System::Int32
	{
		ThrowHigh = 4,
		ThrowLow = 0,
		Fly = 1,
		Wall = 99,
		Knock = 3,
		InAir = 2,
	};
}
