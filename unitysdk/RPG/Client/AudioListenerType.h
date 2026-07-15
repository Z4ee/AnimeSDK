#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AudioListenerType_TypeDefinitionIndex = 57087;

	enum class AudioListenerType : ::System::Int32
	{
		Default = 0,
		UI = 1,
		Count = 2,
	};
}
