#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int InsertAbilityFinishSource_TypeDefinitionIndex = 17520;

	enum class InsertAbilityFinishSource : ::System::Int32
	{
		Uncertain = 0,
		Complete = 1,
		OwnerUnstage = 2,
		EntityIllegal = 3,
		AbortBehaviorFlags = 4,
		ForceKill = 5,
		ActivePredicateCheck = 6,
		LastKillTriggered = 7,
		AbortByTask = 8,
	};
}
