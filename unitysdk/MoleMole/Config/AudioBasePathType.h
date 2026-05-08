#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AudioBasePathType_TypeDefinitionIndex = 50686;

	enum class AudioBasePathType : ::System::Int32
	{
		Streaming = 0,
		Persistent = 1,
		Bare = 3,
		AppData = 2,
	};
}
