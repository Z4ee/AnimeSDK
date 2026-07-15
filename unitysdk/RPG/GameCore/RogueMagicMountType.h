#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicMountType_TypeDefinitionIndex = 10258;

	enum class RogueMagicMountType : ::System::Int32
	{
		None = 0,
		Passive = 3,
		Active = 4,
		Attach = 5,
	};
}
