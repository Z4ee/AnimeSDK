#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateAreaType_TypeDefinitionIndex = 10977;

	enum class FateAreaType : ::System::Int32
	{
		None = 0,
		Guide = 1,
		Train = 2,
		Formal = 3,
	};
}
