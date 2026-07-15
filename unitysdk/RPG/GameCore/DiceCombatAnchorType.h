#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatAnchorType_TypeDefinitionIndex = 10864;

	enum class DiceCombatAnchorType : ::System::Int32
	{
		None = 0,
		TargetSide = 1,
		TargetHeadIcon = 2,
		Manual = 3,
	};
}
