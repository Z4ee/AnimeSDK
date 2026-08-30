#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SelectEntityType_TypeDefinitionIndex = 18173;

	enum class SelectEntityType : ::System::Int32
	{
		Cat = 0,
		BoxTrap = 1,
	};
}
