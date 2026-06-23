#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AudioMixerDeviceSettingType_TypeDefinitionIndex = 46863;

	enum class AudioMixerDeviceSettingType : ::System::Int32
	{
		Phone = 3,
		HeadPhones = 1,
		None = 0,
		SoundBar = 2,
		TV = 4,
	};
}
