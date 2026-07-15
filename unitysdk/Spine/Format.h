#pragma once
#include "unitysdk/unitysdk.h"

namespace Spine
{
	inline static constexpr unsigned int Format_TypeDefinitionIndex = 37487;

	enum class Format : ::System::Int32
	{
		Alpha = 0,
		Intensity = 1,
		LuminanceAlpha = 2,
		RGB565 = 3,
		RGBA4444 = 4,
		RGB888 = 5,
		RGBA8888 = 6,
	};
}
