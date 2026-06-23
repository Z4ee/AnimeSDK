#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int EReloadGroupReason_TypeDefinitionIndex = 87601;

	enum class EReloadGroupReason : ::System::Int32
	{
		GM = 2,
		GraphNode_ReloadSuite = 8,
		TeamChange = 7,
		GraphNode_ReloadGroup = 9,
		TeamAllDead = 4,
		Default = 0,
		ServerNotify = 1,
		TeamAllDead_Revive = 5,
		GraphNode_RollbackPoint = 6,
		Unstuck = 3,
	};
}
