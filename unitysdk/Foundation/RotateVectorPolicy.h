#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int RotateVectorPolicy_TypeDefinitionIndex = 8521;

	enum class RotateVectorPolicy : ::System::Byte
	{
		WithoutTwist = 0x2,
		Default = 0x0,
		ByOrientation = 0x1,
		ByShortestPath = 0x0,
	};
}
