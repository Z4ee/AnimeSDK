#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MissionReplayModule_DownloadState_TypeDefinitionIndex = 63260;

	enum class MissionReplayModule_DownloadState : ::System::Int32
	{
		START = 0,
		Value_1 = 1,
		FINISH = 2,
	};
}
