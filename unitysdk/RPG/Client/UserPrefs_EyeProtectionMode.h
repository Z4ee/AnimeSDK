#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UserPrefs_EyeProtectionMode_TypeDefinitionIndex = 56725;

	enum class UserPrefs_EyeProtectionMode : ::System::Int32
	{
		Close = 0,
		Low = 1,
		High = 2,
	};
}
