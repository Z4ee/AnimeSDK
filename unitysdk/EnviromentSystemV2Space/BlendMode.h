#pragma once
#include "unitysdk/unitysdk.h"

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int BlendMode_TypeDefinitionIndex = 46080;

	enum class BlendMode : ::System::Int32
	{
		CSBlend = 0,
		PSBlend = 1,
		UseLeft = 2,
		UseRight = 3,
	};
}
