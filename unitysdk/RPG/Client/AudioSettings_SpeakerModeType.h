#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AudioSettings_SpeakerModeType_TypeDefinitionIndex = 55479;

	enum class AudioSettings_SpeakerModeType : ::System::Int32
	{
		Auto = 0,
		Speaker = 1,
		Headphone = 2,
	};
}
