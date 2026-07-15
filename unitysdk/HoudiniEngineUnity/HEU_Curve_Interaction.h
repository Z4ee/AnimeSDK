#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_Curve_Interaction_TypeDefinitionIndex = 38226;

	enum class HEU_Curve_Interaction : ::System::Int32
	{
		VIEW = 0,
		ADD = 1,
		EDIT = 2,
	};
}
