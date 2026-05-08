#pragma once
#include "unitysdk/unitysdk.h"

namespace Cinemachine
{
	inline static constexpr unsigned int LensSettings_OverrideModes_TypeDefinitionIndex = 32589;

	enum class LensSettings_OverrideModes : ::System::Int32
	{
		None = 0,
		Orthographic = 1,
		Perspective = 2,
		Physical = 3,
	};
}
