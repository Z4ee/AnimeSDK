#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MonoEffectContrllerModule
{
	inline static constexpr unsigned int GuidanceModule_GuidanceType_TypeDefinitionIndex = 52675;

	enum class GuidanceModule_GuidanceType : ::System::Int32
	{
		Bezier2 = 0,
		Bezier3 = 1,
		Curve = 2,
	};
}
