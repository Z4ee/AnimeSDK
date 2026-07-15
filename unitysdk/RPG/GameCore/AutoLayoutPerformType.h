#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AutoLayoutPerformType_TypeDefinitionIndex = 23827;

	enum class AutoLayoutPerformType : ::System::Int32
	{
		AddImmediately = 0,
		RemoveImmediaetly = 1,
		SwitchPerform = 2,
		MaxHighlightPerform = 3,
	};
}
