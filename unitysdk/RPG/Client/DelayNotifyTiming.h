#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int DelayNotifyTiming_TypeDefinitionIndex = 57366;

	enum class DelayNotifyTiming : ::System::Int32
	{
		AdvEntered = 0,
		AdvHideLoadingPage = 1,
	};
}
