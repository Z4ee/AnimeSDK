#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ButtonShowPriority_TypeDefinitionIndex = 16849;

	enum class ButtonShowPriority : ::System::Int32
	{
		High = 100,
		Default = 10,
		Low = 1,
	};
}
