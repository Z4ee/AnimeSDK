#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResilienceEnum_TypeDefinitionIndex = 16327;

	enum class ResilienceEnum : ::System::Int32
	{
		S = 0,
		A = 1,
		B = 2,
		C = 3,
		D = 4,
		Unknown = 5,
	};
}
