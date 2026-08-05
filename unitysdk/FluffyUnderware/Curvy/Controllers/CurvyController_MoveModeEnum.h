#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy::Controllers
{
	inline static constexpr unsigned int CurvyController_MoveModeEnum_TypeDefinitionIndex = 39563;

	enum class CurvyController_MoveModeEnum : ::System::Int32
	{
		Relative = 0,
		AbsolutePrecise = 1,
	};
}
