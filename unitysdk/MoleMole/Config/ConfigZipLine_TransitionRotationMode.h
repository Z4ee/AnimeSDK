#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_TransitionRotationMode_TypeDefinitionIndex = 51246;

	enum class ConfigZipLine_TransitionRotationMode : ::System::Int32
	{
		SwitchDirection_Instant = 3,
		TargetTangent_Lerp = 1,
		SwitchDirection_Lerp = 4,
		SourceTangent_Instant = 2,
		TargetTangent_Instant = 0,
		SwitchDirection_TargetTangent_Lerp = 5,
	};
}
