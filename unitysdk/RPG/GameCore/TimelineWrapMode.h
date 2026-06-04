#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimelineWrapMode_TypeDefinitionIndex = 23180;

	enum class TimelineWrapMode : ::System::Int32
	{
		Hold = 0,
		Loop = 1,
		None = 2,
	};
}
