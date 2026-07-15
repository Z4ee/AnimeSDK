#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelBuffType_TypeDefinitionIndex = 15377;

	enum class ChimeraDuelBuffType : ::System::Int32
	{
		None = 0,
		AddEffect = 1,
	};
}
