#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int FBIKChain_Smoothing_TypeDefinitionIndex = 38939;

	enum class FBIKChain_Smoothing : ::System::Int32
	{
		None = 0,
		Cubic = 2,
		Exponential = 1,
	};
}
