#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraWorkType_TypeDefinitionIndex = 12517;

	enum class ChimeraWorkType : ::System::Int32
	{
		None = 0,
		Normal = 1,
		Hard = 2,
	};
}
