#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorBeHitTag_TypeDefinitionIndex = 67775;

	enum class AnimatorBeHitTag : ::System::Int32
	{
		ExhaustedStart = 501,
		Frostbite = 36,
		Ignite = 30,
		Unknown = 500,
		Chaos = 34,
		IceBreak = 505,
		Strike = 35,
		Overload = 31,
		SubPartDestroy = 503,
		ExhaustedEnd = 502,
		Stun = 1,
		Electric = 27,
		SwitchPhase = 504,
		Wind = 39,
	};
}
