#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleConditionType_TypeDefinitionIndex = 11451;

	enum class ExpeditionBattleConditionType : ::System::Int32
	{
		None = 0,
		GreaterEqual = 1,
		LessEqual = 2,
	};
}
