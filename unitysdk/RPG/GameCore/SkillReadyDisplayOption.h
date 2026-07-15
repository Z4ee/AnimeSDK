#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillReadyDisplayOption_TypeDefinitionIndex = 17458;

	enum class SkillReadyDisplayOption : ::System::UInt16
	{
		None = 0x0,
		ShowOutline = 0x1,
		ShowCrossHair = 0x2,
		All = 0xFFFF,
	};
}
