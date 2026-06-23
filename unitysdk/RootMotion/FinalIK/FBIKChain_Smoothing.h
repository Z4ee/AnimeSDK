#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int FBIKChain_Smoothing_TypeDefinitionIndex = 38304;

	enum class FBIKChain_Smoothing : ::System::Int32
	{
		Exponential = 1,
		Cubic = 2,
		None = 0,
	};
}
