#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AudioManager_AudioDownloadState_TypeDefinitionIndex = 57082;

	enum class AudioManager_AudioDownloadState : ::System::Int32
	{
		START = 0,
		DOWNLOAD = 1,
		FINISH = 2,
	};
}
