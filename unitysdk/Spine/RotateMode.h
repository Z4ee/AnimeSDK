#pragma once
#include "unitysdk/unitysdk.h"

namespace Spine
{
	inline static constexpr unsigned int RotateMode_TypeDefinitionIndex = 32889;

	enum class RotateMode : ::System::Int32
	{
		Tangent = 0,
		Chain = 1,
		ChainScale = 2,
	};
}
