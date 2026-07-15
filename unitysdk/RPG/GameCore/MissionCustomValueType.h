#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionCustomValueType_TypeDefinitionIndex = 18240;

	enum class MissionCustomValueType : ::System::Int32
	{
		MissionResult = 0,
		LoadGroup = 1,
		Former = 2,
		ClientOnly = 3,
	};
}
