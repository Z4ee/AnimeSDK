#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int NapAnisotropicSamplingType_TypeDefinitionIndex = 73952;

	enum class NapAnisotropicSamplingType : ::System::Int32
	{
		Sampling_1x = 0,
		Sampling_16x = 4,
		Sampling_4x = 2,
		Sampling_8x = 3,
		Sampling_2x = 1,
	};
}
