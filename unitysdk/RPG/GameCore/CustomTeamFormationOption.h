#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CustomTeamFormationOption_TypeDefinitionIndex = 15934;

	enum class CustomTeamFormationOption : ::System::UInt32
	{
		None = 0x0,
		IgnoreOverrideConfig = 0x1,
		IgnoreFollowSummoner = 0x2,
		ExcludeInCustomFromation = 0x4,
		ExcludeWhenCalcCenterPos = 0x8,
		DitherIfBlockOtherCharacter = 0x10,
	};
}
