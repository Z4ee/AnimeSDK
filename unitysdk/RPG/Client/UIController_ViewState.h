#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UIController_ViewState_TypeDefinitionIndex = 59861;

	enum class UIController_ViewState : ::System::Int32
	{
		Initialized = 0,
		Showed = 1,
		ViewLoaded = 2,
		ViewSet = 3,
		AssetsLoaded = 4,
		Exiting = 5,
		Destroyed = 6,
	};
}
