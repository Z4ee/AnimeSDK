#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraDelayMoveDataBlendDefinition_Style_TypeDefinitionIndex = 78630;

	enum class CameraDelayMoveDataBlendDefinition_Style : ::System::Int32
	{
		EaseIn = 2,
		EaseOut = 3,
		Cut = 0,
		HardOut = 5,
		HardIn = 4,
		Linear = 6,
		EaseInOut = 1,
		Custom = 7,
	};
}
