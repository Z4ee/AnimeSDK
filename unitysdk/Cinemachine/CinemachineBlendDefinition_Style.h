#pragma once
#include "unitysdk/unitysdk.h"

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineBlendDefinition_Style_TypeDefinitionIndex = 37648;

	enum class CinemachineBlendDefinition_Style : ::System::Int32
	{
		Cut = 0,
		EaseInOut = 1,
		EaseIn = 2,
		EaseOut = 3,
		HardIn = 4,
		HardOut = 5,
		Linear = 6,
		Custom = 7,
	};
}
