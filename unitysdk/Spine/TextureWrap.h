#pragma once
#include "unitysdk/unitysdk.h"

namespace Spine
{
	inline static constexpr unsigned int TextureWrap_TypeDefinitionIndex = 37489;

	enum class TextureWrap : ::System::Int32
	{
		MirroredRepeat = 0,
		ClampToEdge = 1,
		Repeat = 2,
	};
}
