#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EMapGridCornerType_TypeDefinitionIndex = 13631;

	enum class EMapGridCornerType : ::System::Int16
	{
		RightDown = 4,
		None = 0,
		RightUp = 2,
		Center = 5,
		LeftDown = 3,
		LeftUp = 1,
	};
}
