#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleBuffType_TypeDefinitionIndex = 16225;

	enum class MarbleBuffType : ::System::Int32
	{
		Default = 0,
		Stack = 1,
	};
}
