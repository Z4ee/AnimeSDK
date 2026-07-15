#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CustomValueType_TypeDefinitionIndex = 10222;

	enum class CustomValueType : ::System::Int32
	{
		MissionCustomValue = 0,
		FloorCustomValue = 1,
		FloorSavedValue = 2,
	};
}
