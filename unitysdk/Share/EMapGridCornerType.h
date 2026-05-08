#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EMapGridCornerType_TypeDefinitionIndex = 15757;

	enum class EMapGridCornerType : ::System::Int16
	{
		None = 0,
		LeftDown = 3,
		LeftUp = 1,
		RightDown = 4,
		RightUp = 2,
		Center = 5,
	};
}
