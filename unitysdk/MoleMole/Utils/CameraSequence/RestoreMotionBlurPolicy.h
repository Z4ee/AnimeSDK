#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int RestoreMotionBlurPolicy_TypeDefinitionIndex = 78403;

	enum class RestoreMotionBlurPolicy : ::System::Int32
	{
		Restore = 0,
		Inactive = 2,
		Active = 1,
	};
}
