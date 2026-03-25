#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int EraEntityType_TypeDefinitionIndex = 60079;

	enum class EraEntityType : ::System::Int32
	{
		Normal = 0,
		CatchStagePropID = 1,
		DynamicStageProp = 2,
		ShowProxyProp = 3,
		FadeInOutProp = 4,
		StateListenerProp = 5,
	};
}
