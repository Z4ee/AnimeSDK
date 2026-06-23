#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorAirHitType_TypeDefinitionIndex = 60638;

	enum class AnimatorAirHitType : ::System::Int32
	{
		InAir = 2,
		Wall = 99,
		ThrowLow = 0,
		Knock = 3,
		Fly = 1,
		ThrowHigh = 4,
	};
}
