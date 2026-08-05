#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion
{
	inline static constexpr unsigned int PlayDirections_TypeDefinitionIndex = 31136;

	enum class PlayDirections : ::System::Int32
	{
		Backward = 1,
		Forward = 0,
		Toggle = 2,
	};
}
