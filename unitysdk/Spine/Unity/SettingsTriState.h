#pragma once
#include "unitysdk/unitysdk.h"

namespace Spine::Unity
{
	inline static constexpr unsigned int SettingsTriState_TypeDefinitionIndex = 39528;

	enum class SettingsTriState : ::System::Int32
	{
		Disable = 0,
		Enable = 1,
		UseGlobalSetting = 2,
	};
}
