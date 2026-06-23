#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet
{
	inline static constexpr unsigned int ContourOrientation_TypeDefinitionIndex = 28439;

	enum class ContourOrientation : ::System::Int32
	{
		Original = 0,
		Clockwise = 1,
		CounterClockwise = 2,
	};
}
