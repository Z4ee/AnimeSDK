#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_Curve_CurveEditState_TypeDefinitionIndex = 38225;

	enum class HEU_Curve_CurveEditState : ::System::Int32
	{
		INVALID = 0,
		GENERATED = 1,
		EDITING = 2,
		REQUIRES_GENERATION = 3,
	};
}
