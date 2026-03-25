#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SmartObjectPlayMode_TypeDefinitionIndex = 15952;

	enum class SmartObjectPlayMode : ::System::Int32
	{
		Sequence = 0,
		Loop = 1,
		Random = 2,
	};
}
