#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleTitelType_TypeDefinitionIndex = 11434;

	enum class ExpeditionBattleTitelType : ::System::Int32
	{
		None = 0,
		Dps = 1,
		Assist = 2,
	};
}
