#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EMapGridCornerType_TypeDefinitionIndex = 11721;

	enum class EMapGridCornerType : ::System::Int16
	{
		LeftDown = 3,
		Center = 5,
		None = 0,
		LeftUp = 1,
		RightDown = 4,
		RightUp = 2,
	};
}
