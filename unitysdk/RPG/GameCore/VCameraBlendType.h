#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int VCameraBlendType_TypeDefinitionIndex = 15786;

	enum class VCameraBlendType : ::System::Int32
	{
		Unknow = 0,
		Cut = 1,
		EaseInOut = 2,
		EaseIn = 3,
		EaseOut = 4,
		HardIn = 5,
		HardOut = 6,
		Linear = 7,
		Custom = 8,
	};
}
