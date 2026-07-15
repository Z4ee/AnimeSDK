#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicStyleType_TypeDefinitionIndex = 10263;

	enum class RogueMagicStyleType : ::System::Int32
	{
		None = 0,
		Ultimate = 1,
		Follow = 2,
		Dot = 3,
		Break = 4,
		Common = 5,
	};
}
