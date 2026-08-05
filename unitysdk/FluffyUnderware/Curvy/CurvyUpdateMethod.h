#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyUpdateMethod_TypeDefinitionIndex = 39445;

	enum class CurvyUpdateMethod : ::System::Int32
	{
		Update = 0,
		Manual = 3,
		FixedUpdate = 2,
		LateUpdate = 1,
		Stop = 4,
	};
}
