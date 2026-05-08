#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorBeHitTag_TypeDefinitionIndex = 75344;

	enum class AnimatorBeHitTag : ::System::Int32
	{
		ExhaustedStart = 501,
		ExhaustedEnd = 502,
		Frostbite = 36,
		Overload = 31,
		Strike = 35,
		Stun = 1,
		Electric = 27,
		Unknown = 500,
		Ignite = 30,
		SubPartDestroy = 503,
		SwitchPhase = 504,
		Chaos = 34,
		IceBreak = 505,
	};
}
