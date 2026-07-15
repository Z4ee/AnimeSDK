#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int SettingManager_HoekeySettingType_TypeDefinitionIndex = 65266;

	enum class SettingManager_HoekeySettingType : ::System::Int32
	{
		KeyboradOnley = 0,
		GamepadOnley = 1,
		All = 2,
	};
}
