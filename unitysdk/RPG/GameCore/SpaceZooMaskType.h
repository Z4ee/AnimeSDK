#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpaceZooMaskType_TypeDefinitionIndex = 11886;

	enum class SpaceZooMaskType : ::System::Int32
	{
		None = 0,
		NormalMask = 1,
		Hide = 2,
		Translucent = 3,
		Show = 4,
	};
}
