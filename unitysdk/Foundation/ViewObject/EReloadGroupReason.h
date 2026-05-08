#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int EReloadGroupReason_TypeDefinitionIndex = 60400;

	enum class EReloadGroupReason : ::System::Int32
	{
		TeamChange = 7,
		GM = 2,
		GraphNode_ReloadSuite = 8,
		Unstuck = 3,
		TeamAllDead_Revive = 5,
		GraphNode_RollbackPoint = 6,
		TeamAllDead = 4,
		Default = 0,
		ServerNotify = 1,
	};
}
