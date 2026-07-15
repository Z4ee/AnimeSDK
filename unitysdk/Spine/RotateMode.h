#pragma once
#include "unitysdk/unitysdk.h"

namespace Spine
{
	inline static constexpr unsigned int RotateMode_TypeDefinitionIndex = 37528;

	enum class RotateMode : ::System::Int32
	{
		Tangent = 0,
		Chain = 1,
		ChainScale = 2,
	};
}
