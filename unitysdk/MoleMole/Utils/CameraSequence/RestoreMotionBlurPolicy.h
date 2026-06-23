#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int RestoreMotionBlurPolicy_TypeDefinitionIndex = 39683;

	enum class RestoreMotionBlurPolicy : ::System::Int32
	{
		Active = 1,
		Restore = 0,
		Inactive = 2,
	};
}
