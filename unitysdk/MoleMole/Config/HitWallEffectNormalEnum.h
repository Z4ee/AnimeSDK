#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HitWallEffectNormalEnum_TypeDefinitionIndex = 42915;

	enum class HitWallEffectNormalEnum : ::System::Int32
	{
		BulletOrRayForward = 1,
		ReverseHitNormal = 0,
	};
}
