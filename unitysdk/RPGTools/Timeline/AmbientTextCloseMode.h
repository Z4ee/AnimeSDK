#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int AmbientTextCloseMode_TypeDefinitionIndex = 48302;

	enum class AmbientTextCloseMode : ::System::Int32
	{
		Immediate = 0,
		FadeOutAll = 1,
	};
}
