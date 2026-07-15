#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityPanelFinishType_TypeDefinitionIndex = 10808;

	enum class ActivityPanelFinishType : ::System::Int32
	{
		None = 0,
		HideRedDot = 1,
		HidePanel = 2,
	};
}
