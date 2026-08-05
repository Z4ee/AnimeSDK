#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int EReloadGroupReason_TypeDefinitionIndex = 77538;

	enum class EReloadGroupReason : ::System::Int32
	{
		ServerNotify = 1,
		Unstuck = 3,
		TeamAllDead_Revive = 5,
		GraphNode_ReloadSuite = 8,
		TeamChange = 7,
		Default = 0,
		TeamAllDead = 4,
		GraphNode_RollbackPoint = 6,
		GraphNode_ReloadGroup = 9,
		GM = 2,
	};
}
