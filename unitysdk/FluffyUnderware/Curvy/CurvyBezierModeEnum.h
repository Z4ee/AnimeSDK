#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyBezierModeEnum_TypeDefinitionIndex = 39492;

	enum class CurvyBezierModeEnum : ::System::Int32
	{
		Combine = 8,
		None = 0,
		Direction = 1,
		Length = 2,
		Connections = 4,
	};
}
