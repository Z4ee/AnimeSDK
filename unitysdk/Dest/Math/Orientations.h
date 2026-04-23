#pragma once
#include "unitysdk/unitysdk.h"

namespace Dest::Math
{
	inline static constexpr unsigned int Orientations_TypeDefinitionIndex = 8812;

	enum class Orientations : ::System::Int32
	{
		CW = 0,
		CCW = 1,
		None = 2,
	};
}
