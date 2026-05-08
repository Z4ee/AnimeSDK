#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AudioMixerDeviceSettingType_TypeDefinitionIndex = 52704;

	enum class AudioMixerDeviceSettingType : ::System::Int32
	{
		Phone = 3,
		HeadPhones = 1,
		TV = 4,
		None = 0,
		SoundBar = 2,
	};
}
