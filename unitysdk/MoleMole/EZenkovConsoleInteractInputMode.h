#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int EZenkovConsoleInteractInputMode_TypeDefinitionIndex = 90999;

	enum class EZenkovConsoleInteractInputMode : ::System::Int32
	{
		ModernV2 = 2,
		Classic = 0,
		Modern = 1,
	};
}
