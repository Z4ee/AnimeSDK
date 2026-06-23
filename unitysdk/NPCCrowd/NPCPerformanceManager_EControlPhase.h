#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCPerformanceManager_EControlPhase_TypeDefinitionIndex = 77743;

	enum class NPCPerformanceManager_EControlPhase : ::System::Int32
	{
		CullControl = 0,
		DensityControl = 1,
	};
}
