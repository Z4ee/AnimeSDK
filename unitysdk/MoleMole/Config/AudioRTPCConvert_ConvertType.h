#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AudioRTPCConvert_ConvertType_TypeDefinitionIndex = 75168;

	enum class AudioRTPCConvert_ConvertType : ::System::Int32
	{
		INVERSE_LERP = 2,
		NO_CHANGE = 0,
		CLAMP = 1,
		PERCENT = 3,
	};
}
