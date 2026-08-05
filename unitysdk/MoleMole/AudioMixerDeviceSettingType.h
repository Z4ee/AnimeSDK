#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AudioMixerDeviceSettingType_TypeDefinitionIndex = 75460;

	enum class AudioMixerDeviceSettingType : ::System::Int32
	{
		SoundBar = 2,
		HeadPhones = 1,
		Phone = 3,
		TV = 4,
		None = 0,
	};
}
