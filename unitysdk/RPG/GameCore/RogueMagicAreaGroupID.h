#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicAreaGroupID_TypeDefinitionIndex = 14264;

	enum class RogueMagicAreaGroupID : ::System::Int32
	{
		None = 0,
		Guide = 1,
		Formal = 2,
		Customization = 3,
		Final = 4,
	};
}
