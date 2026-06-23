#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy::Controllers
{
	inline static constexpr unsigned int CurvyController_MoveModeEnum_TypeDefinitionIndex = 38987;

	enum class CurvyController_MoveModeEnum : ::System::Int32
	{
		AbsolutePrecise = 1,
		Relative = 0,
	};
}
