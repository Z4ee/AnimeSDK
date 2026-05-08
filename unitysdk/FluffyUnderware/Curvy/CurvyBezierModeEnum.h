#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyBezierModeEnum_TypeDefinitionIndex = 37180;

	enum class CurvyBezierModeEnum : ::System::Int32
	{
		None = 0,
		Direction = 1,
		Length = 2,
		Connections = 4,
		Combine = 8,
	};
}
