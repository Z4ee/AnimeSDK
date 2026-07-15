#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelGameType_TypeDefinitionIndex = 10743;

	enum class ChimeraDuelGameType : ::System::Int32
	{
		None = 0,
		PVP = 1,
		PVE = 2,
		Custom = 3,
	};
}
