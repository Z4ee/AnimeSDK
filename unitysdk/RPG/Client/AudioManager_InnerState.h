#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AudioManager_InnerState_TypeDefinitionIndex = 55107;

	enum class AudioManager_InnerState : ::System::Int32
	{
		Invalid = 0,
		Inited = 1,
		WillBeDisposed = 2,
	};
}
