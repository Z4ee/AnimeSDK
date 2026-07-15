#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraTailPartType_TypeDefinitionIndex = 12513;

	enum class ChimeraTailPartType : ::System::Int32
	{
		None = 0,
		Normal = 1,
		Demon = 2,
		Scorpion = 3,
		Fish = 4,
	};
}
