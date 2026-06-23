#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion
{
	inline static constexpr unsigned int PlayDirections_TypeDefinitionIndex = 30775;

	enum class PlayDirections : ::System::Int32
	{
		Toggle = 2,
		Backward = 1,
		Forward = 0,
	};
}
