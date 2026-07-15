#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherSpiritType_TypeDefinitionIndex = 10544;

	enum class AetherSpiritType : ::System::Int32
	{
		Human = 0,
		Machine = 1,
		Abnormity = 2,
		Unknown = 3,
	};
}
