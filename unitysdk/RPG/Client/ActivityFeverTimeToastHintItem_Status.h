#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityFeverTimeToastHintItem_Status_TypeDefinitionIndex = 66727;

	enum class ActivityFeverTimeToastHintItem_Status : ::System::Int32
	{
		Hiding = 0,
		FadeIn = 1,
		Showing = 2,
		FadeOut = 3,
	};
}
