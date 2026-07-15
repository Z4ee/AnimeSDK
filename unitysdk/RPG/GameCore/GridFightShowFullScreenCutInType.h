#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightShowFullScreenCutInType_TypeDefinitionIndex = 23851;

	enum class GridFightShowFullScreenCutInType : ::System::Int32
	{
		None = 0,
		Normal = 1,
		NormalWithoutRole = 2,
		Special = 3,
	};
}
