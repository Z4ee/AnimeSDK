#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_HoudiniRampInterpolationTypeWrapper_TypeDefinitionIndex = 38414;

	enum class HEU_HoudiniRampInterpolationTypeWrapper : ::System::Int32
	{
		CONSTANT = 0,
		LINEAR = 1,
		CATMULL_ROM = 2,
	};
}
