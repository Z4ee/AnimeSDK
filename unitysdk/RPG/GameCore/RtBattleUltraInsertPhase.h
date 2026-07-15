#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleUltraInsertPhase_TypeDefinitionIndex = 51778;

	enum class RtBattleUltraInsertPhase : ::System::Int32
	{
		None = 0,
		Insert = 1,
		Prepare = 2,
		Executing = 3,
		End = 4,
	};
}
