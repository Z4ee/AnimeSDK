#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PamChatConditionType_TypeDefinitionIndex = 13112;

	enum class PamChatConditionType : ::System::Int32
	{
		None = 0,
		DailyFirstLogin = 1,
		FirstObtainAvatar = 2,
		InActivityModuleID = 3,
		PowerGreaterOrEqual = 4,
		NoOtherGreetingTriggered = 5,
	};
}
