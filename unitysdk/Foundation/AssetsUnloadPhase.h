#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int AssetsUnloadPhase_TypeDefinitionIndex = 7894;

	enum class AssetsUnloadPhase : ::System::Int32
	{
		None = 0,
		OnRestart = 1,
	};
}
