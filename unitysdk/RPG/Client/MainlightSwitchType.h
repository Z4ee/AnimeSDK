#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MainlightSwitchType_TypeDefinitionIndex = 66647;

	enum class MainlightSwitchType : ::System::Int32
	{
		TaskSyncMainLightAndCamera = 0,
		TaskSyncCharAndSceneLight = 1,
		TaskSetMainLightDir = 2,
		TimelineKMainLightDir = 3,
		UIMainLightDir = 4,
		DebugMainLight = 5,
	};
}
