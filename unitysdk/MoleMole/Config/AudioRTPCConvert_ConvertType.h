#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AudioRTPCConvert_ConvertType_TypeDefinitionIndex = 75872;

	enum class AudioRTPCConvert_ConvertType : ::System::Int32
	{
		CLAMP = 1,
		INVERSE_LERP = 2,
		PERCENT = 3,
		NO_CHANGE = 0,
	};
}
