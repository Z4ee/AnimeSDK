#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int NapAnisotropicSamplingType_TypeDefinitionIndex = 60956;

	enum class NapAnisotropicSamplingType : ::System::Int32
	{
		Sampling_4x = 2,
		Sampling_16x = 4,
		Sampling_1x = 0,
		Sampling_2x = 1,
		Sampling_8x = 3,
	};
}
