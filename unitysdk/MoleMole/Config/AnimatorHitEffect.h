#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorHitEffect_TypeDefinitionIndex = 86268;

	enum class AnimatorHitEffect : ::System::Int32
	{
		Shake = -1,
		HitSky = 1,
		Mute = -2,
		HitFloor = 2,
		HitGround = 0,
	};
}
