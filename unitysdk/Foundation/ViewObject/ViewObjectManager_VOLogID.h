#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int ViewObjectManager_VOLogID_TypeDefinitionIndex = 66395;

	enum class ViewObjectManager_VOLogID : ::System::Int32
	{
		ID_OnEventCallback_WaitReady = 11,
		ID_SendEvent = 1,
		ID_OnGroupTriggerEnter = 20,
		ID_CacheSendCustomEvent = 7,
		ID_SendEventInstant = 2,
		ID_CacheSendEvent = 5,
		ID_OnGroupTriggerEnterSync = 21,
		ID_OnBattleRegionEnter = 30,
		ID_OnGroupTriggerExit = 22,
		ID_CacheSendEventInstant = 6,
		ID_SendCustomEvent = 4,
		ID_OnEventCallback_PostReady = 12,
		ID_SendEventInstantWithArg = 3,
		ID_OnEventCallback_RealCall = 10,
	};
}
