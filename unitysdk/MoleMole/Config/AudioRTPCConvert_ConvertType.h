#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AudioRTPCConvert_ConvertType_TypeDefinitionIndex = 56423;

	enum class AudioRTPCConvert_ConvertType : ::System::Int32
	{
		INVERSE_LERP = 2,
		PERCENT = 3,
		CLAMP = 1,
		NO_CHANGE = 0,
	};
}
