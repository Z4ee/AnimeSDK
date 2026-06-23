#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorHitEffect_TypeDefinitionIndex = 67521;

	enum class AnimatorHitEffect : ::System::Int32
	{
		HitFloor = 2,
		HitGround = 0,
		Shake = -1,
		HitSky = 1,
		Mute = -2,
	};
}
