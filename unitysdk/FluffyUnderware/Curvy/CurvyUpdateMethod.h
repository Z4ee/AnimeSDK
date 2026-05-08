#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyUpdateMethod_TypeDefinitionIndex = 37190;

	enum class CurvyUpdateMethod : ::System::Int32
	{
		Update = 0,
		LateUpdate = 1,
		FixedUpdate = 2,
	};
}
