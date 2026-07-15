#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ParamType_TypeDefinitionIndex = 23603;

	enum class ST_ParamType : ::System::Int32
	{
		Custom = 0,
		UseAIConfig = 1,
	};
}
