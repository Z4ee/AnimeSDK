#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RollingSubtitlesDisplayType_TypeDefinitionIndex = 23960;

	enum class RollingSubtitlesDisplayType : ::System::Int32
	{
		fullScreen = 0,
		Scroll = 1,
	};
}
