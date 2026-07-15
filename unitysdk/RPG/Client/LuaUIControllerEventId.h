#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int LuaUIControllerEventId_TypeDefinitionIndex = 56784;

	enum class LuaUIControllerEventId : ::System::Int32
	{
		eOnAfterViewLoaded = 0,
		eOnStartExit = 1,
		eOnExitPreStep = 2,
		eAllResourceLoaded = 3,
	};
}
