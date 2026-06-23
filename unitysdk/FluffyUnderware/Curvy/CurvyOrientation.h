#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyOrientation_TypeDefinitionIndex = 38978;

	enum class CurvyOrientation : ::System::Int32
	{
		Static = 2,
		Dynamic = 1,
		None = 0,
	};
}
