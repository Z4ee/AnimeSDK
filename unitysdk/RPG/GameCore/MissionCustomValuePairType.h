#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionCustomValuePairType_TypeDefinitionIndex = 17397;

	enum class MissionCustomValuePairType : ::System::Int32
	{
		DirectValue = 0,
		CustomValue = 1,
	};
}
