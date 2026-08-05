#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraDelayMoveDataBlendDefinition_Style_TypeDefinitionIndex = 54832;

	enum class CameraDelayMoveDataBlendDefinition_Style : ::System::Int32
	{
		Cut = 0,
		Custom = 7,
		EaseOut = 3,
		HardIn = 4,
		EaseIn = 2,
		HardOut = 5,
		Linear = 6,
		EaseInOut = 1,
	};
}
