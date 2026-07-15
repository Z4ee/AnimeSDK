#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ECrowdLookAtMode_TypeDefinitionIndex = 10145;

	enum class ECrowdLookAtMode : ::System::Int32
	{
		Closed = 0,
		LookCrowd = 1,
		LookPosition = 2,
		LookAnchor = 3,
	};
}
