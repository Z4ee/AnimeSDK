#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionCustomValuePairType_TypeDefinitionIndex = 18005;

	enum class MissionCustomValuePairType : ::System::Int32
	{
		DirectValue = 0,
		CustomValue = 1,
	};
}
