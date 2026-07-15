#pragma once
#include "unitysdk/unitysdk.h"

namespace OceanSystem
{
	inline static constexpr unsigned int OceanRenderer_WaveType_TypeDefinitionIndex = 47136;

	enum class OceanRenderer_WaveType : ::System::Int32
	{
		SharedFFT = 0,
		FFT = 1,
		BakeFFT = 2,
		StaticNormalMap = 3,
	};
}
