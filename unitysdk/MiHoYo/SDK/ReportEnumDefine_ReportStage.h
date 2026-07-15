#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ReportEnumDefine_ReportStage_TypeDefinitionIndex = 44760;

	enum class ReportEnumDefine_ReportStage : ::System::Int32
	{
		Default = 0,
		ENTER_ROOM_SUCC = 1,
		ENTER_ROOM_FAILED = 2,
		ENTER_ROOM_HEARTBEAT = 3,
		EXIT_ROOM = 4,
		ASR_START = 1,
		ASR_SUCCESS = 2,
		ASR_FAIL = 3,
		ASR_ACCURACY = 4,
	};
}
