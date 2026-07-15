#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int LoadingManager_VerifyLoadingType_TypeDefinitionIndex = 57856;

	enum class LoadingManager_VerifyLoadingType : ::System::Int32
	{
		Unknown = 0,
		EnterAdvLoadFinish = 1,
		EnterBattleLoadFinish = 2,
		DesignDataLoadFinish = 4,
		DesignDataUpdateFinish = 5,
		EnterPerformance = 7,
		LeavePerformance = 8,
	};
}
