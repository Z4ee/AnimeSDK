#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleFlowStateType_TypeDefinitionIndex = 16050;

	enum class ExpeditionBattleFlowStateType : ::System::Int32
	{
		None = 0,
		Start = 1,
		LevelStart = 2,
		Common = 3,
		Special = 4,
		Settlement = 5,
		End = 6,
		RouteParallel = 7,
	};
}
