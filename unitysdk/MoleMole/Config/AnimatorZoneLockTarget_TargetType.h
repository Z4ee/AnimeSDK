#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneLockTarget_TargetType_TypeDefinitionIndex = 60619;

	enum class AnimatorZoneLockTarget_TargetType : ::System::Int32
	{
		Target = 0,
		GuideTargetPosition = 1,
		CustomPosRot = 2,
	};
}
