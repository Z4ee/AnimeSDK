#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleModeType_TypeDefinitionIndex = 51158;

	enum class BattleModeType : ::System::Int32
	{
		None = 0,
		RtBattle = 1,
		RtDefence = 2,
	};
}
