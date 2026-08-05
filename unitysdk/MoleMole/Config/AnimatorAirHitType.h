#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorAirHitType_TypeDefinitionIndex = 69450;

	enum class AnimatorAirHitType : ::System::Int32
	{
		Fly = 1,
		InAir = 2,
		ThrowLow = 0,
		Knock = 3,
		ThrowHigh = 4,
		Wall = 99,
	};
}
