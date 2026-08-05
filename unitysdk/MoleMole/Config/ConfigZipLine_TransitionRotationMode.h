#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_TransitionRotationMode_TypeDefinitionIndex = 53014;

	enum class ConfigZipLine_TransitionRotationMode : ::System::Int32
	{
		SwitchDirection_Lerp = 4,
		SwitchDirection_TargetTangent_Lerp = 5,
		SwitchDirection_Instant = 3,
		TargetTangent_Lerp = 1,
		TargetTangent_Instant = 0,
		SourceTangent_Instant = 2,
	};
}
