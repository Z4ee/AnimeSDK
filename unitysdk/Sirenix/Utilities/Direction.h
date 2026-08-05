#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::Utilities
{
	inline static constexpr unsigned int Direction_TypeDefinitionIndex = 6477;

	enum class Direction : ::System::Int32
	{
		Left = 0,
		Right = 1,
		Top = 2,
		Bottom = 3,
	};
}
