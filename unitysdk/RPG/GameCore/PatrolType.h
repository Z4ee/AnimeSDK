#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PatrolType_TypeDefinitionIndex = 14972;

	enum class PatrolType : ::System::Int32
	{
		Loop = 0,
		Reverse = 1,
		RandomGraph = 2,
	};
}
