#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelItemType_TypeDefinitionIndex = 10735;

	enum class ChimeraDuelItemType : ::System::Int32
	{
		None = 0,
		Food = 1,
		Equipment = 2,
	};
}
