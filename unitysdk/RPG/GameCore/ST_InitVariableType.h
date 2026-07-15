#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_InitVariableType_TypeDefinitionIndex = 14891;

	enum class ST_InitVariableType : ::System::Int32
	{
		Once = 0,
		EveryTime = 1,
	};
}
