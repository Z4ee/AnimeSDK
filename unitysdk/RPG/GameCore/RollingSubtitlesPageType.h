#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RollingSubtitlesPageType_TypeDefinitionIndex = 22457;

	enum class RollingSubtitlesPageType : ::System::Int32
	{
		MainTitle = 0,
		SubTitle = 1,
		Space = 2,
		Actor = 3,
	};
}
