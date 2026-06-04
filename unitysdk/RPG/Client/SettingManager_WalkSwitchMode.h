#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int SettingManager_WalkSwitchMode_TypeDefinitionIndex = 63894;

	enum class SettingManager_WalkSwitchMode : ::System::Int32
	{
		Default = 0,
		LockWalk = 1,
	};
}
