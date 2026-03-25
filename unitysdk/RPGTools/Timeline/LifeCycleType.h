#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int LifeCycleType_TypeDefinitionIndex = 38992;

	enum class LifeCycleType : ::System::Int32
	{
		OnBehaviourPlay = 0,
		OnBehaviourPause = 1,
		OnGraphStart = 2,
		OnGraphStop = 3,
	};
}
