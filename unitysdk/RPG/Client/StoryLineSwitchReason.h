#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int StoryLineSwitchReason_TypeDefinitionIndex = 64979;

	enum class StoryLineSwitchReason : ::System::Int32
	{
		Server = 0,
		SwitchPage = 1,
		Mission = 2,
		Handbook = 3,
		Activity = 4,
		Other = 5,
	};
}
