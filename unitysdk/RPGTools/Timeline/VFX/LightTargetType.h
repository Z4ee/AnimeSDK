#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::Timeline::VFX
{
	inline static constexpr unsigned int LightTargetType_TypeDefinitionIndex = 46899;

	enum class LightTargetType : ::System::Int32
	{
		AttachPoint = 0,
		Anchor = 1,
	};
}
