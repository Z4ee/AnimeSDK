#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyUpdateMethod_TypeDefinitionIndex = 38989;

	enum class CurvyUpdateMethod : ::System::Int32
	{
		FixedUpdate = 2,
		Update = 0,
		LateUpdate = 1,
		Manual = 3,
	};
}
