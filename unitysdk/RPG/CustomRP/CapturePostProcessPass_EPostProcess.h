#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CapturePostProcessPass_EPostProcess_TypeDefinitionIndex = 36219;

	enum class CapturePostProcessPass_EPostProcess : ::System::Int32
	{
		None = 0,
		Material = 1,
		WaterMark = 2,
		Blur = 4,
	};
}
