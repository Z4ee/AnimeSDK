#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleConditionType_TypeDefinitionIndex = 11435;

	enum class ExpeditionBattleConditionType : ::System::Int32
	{
		None = 0,
		GreaterEqual = 1,
		LessEqual = 2,
	};
}
