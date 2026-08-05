#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int SpaceType_TypeDefinitionIndex = 8811;

	enum class SpaceType : ::System::Int32
	{
		Local = 1,
		World = 0,
	};
}
