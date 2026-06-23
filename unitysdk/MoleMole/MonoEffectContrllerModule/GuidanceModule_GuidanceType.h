#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MonoEffectContrllerModule
{
	inline static constexpr unsigned int GuidanceModule_GuidanceType_TypeDefinitionIndex = 53709;

	enum class GuidanceModule_GuidanceType : ::System::Int32
	{
		Bezier3 = 1,
		Bezier2 = 0,
		Curve = 2,
	};
}
