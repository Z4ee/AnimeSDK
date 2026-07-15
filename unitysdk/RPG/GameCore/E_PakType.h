#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int E_PakType_TypeDefinitionIndex = 56625;

	enum class E_PakType : ::System::Int32
	{
		DEV = 0,
		GM = 1,
		PRE = 2,
		CE = 3,
		BETA = 4,
		PROD = 5,
		PREbeta = 6,
	};
}
