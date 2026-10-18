#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int AmbientTextCloseMode_TypeDefinitionIndex = 47843;

	enum class AmbientTextCloseMode : ::System::Int32
	{
		Immediate = 0,
		FadeOutAll = 1,
	};
}
