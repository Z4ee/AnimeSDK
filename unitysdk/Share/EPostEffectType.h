#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EPostEffectType_TypeDefinitionIndex = 8949;

	enum class EPostEffectType : ::System::Int16
	{
		VignetteEffect = 2,
		ScreenEffect = 3,
		Glitch = 1,
		RadialBlur = 4,
		EnumCount = 5,
	};
}
