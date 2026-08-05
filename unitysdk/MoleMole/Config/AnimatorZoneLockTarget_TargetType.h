#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneLockTarget_TargetType_TypeDefinitionIndex = 72640;

	enum class AnimatorZoneLockTarget_TargetType : ::System::Int32
	{
		GuideTargetPosition = 1,
		CustomPosRot = 2,
		Target = 0,
	};
}
