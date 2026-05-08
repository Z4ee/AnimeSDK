#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int RotateVectorPolicy_TypeDefinitionIndex = 8879;

	enum class RotateVectorPolicy : ::System::Byte
	{
		ByOrientation = 0x1,
		Default = 0x0,
		ByShortestPath = 0x0,
		WithoutTwist = 0x2,
	};
}
