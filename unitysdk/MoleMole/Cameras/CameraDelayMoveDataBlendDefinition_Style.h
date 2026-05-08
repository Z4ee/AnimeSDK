#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraDelayMoveDataBlendDefinition_Style_TypeDefinitionIndex = 43030;

	enum class CameraDelayMoveDataBlendDefinition_Style : ::System::Int32
	{
		EaseIn = 2,
		HardOut = 5,
		EaseOut = 3,
		Cut = 0,
		EaseInOut = 1,
		HardIn = 4,
		Linear = 6,
		Custom = 7,
	};
}
