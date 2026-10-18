#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int SWRTTestCube_Consumer_TypeDefinitionIndex = 37873;

	enum class SWRTTestCube_Consumer : ::System::Int32
	{
		RasterSwrt = 0,
		ComputeSwrt = 1,
		RasterNonSwrt = 2,
	};
}
