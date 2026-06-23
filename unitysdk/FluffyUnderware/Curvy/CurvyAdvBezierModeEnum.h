#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyAdvBezierModeEnum_TypeDefinitionIndex = 39005;

	enum class CurvyAdvBezierModeEnum : ::System::Int32
	{
		Direction = 1,
		Length = 2,
		Combine = 8,
		None = 0,
	};
}
