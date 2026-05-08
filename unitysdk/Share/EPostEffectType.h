#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EPostEffectType_TypeDefinitionIndex = 9750;

	enum class EPostEffectType : ::System::Int16
	{
		Glitch = 1,
		VignetteEffect = 2,
		ScreenEffect = 3,
		EnumCount = 5,
		RadialBlur = 4,
	};
}
