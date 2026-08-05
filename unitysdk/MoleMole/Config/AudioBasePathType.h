#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AudioBasePathType_TypeDefinitionIndex = 40707;

	enum class AudioBasePathType : ::System::Int32
	{
		Persistent = 1,
		AppData = 2,
		Bare = 3,
		Streaming = 0,
	};
}
