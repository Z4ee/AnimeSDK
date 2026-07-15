#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RPGSDKPermissionResult_TypeDefinitionIndex = 58353;

	enum class RPGSDKPermissionResult : ::System::Int32
	{
		Granted = 0,
		Rejected = 1,
		RejectedNoPrompt = 2,
	};
}
