#pragma once
#include "unitysdk/unitysdk.h"

namespace Spine
{
	inline static constexpr unsigned int BlendMode_TypeDefinitionIndex = 37507;

	enum class BlendMode : ::System::Int32
	{
		Normal = 0,
		Additive = 1,
		Multiply = 2,
		Screen = 3,
	};
}
