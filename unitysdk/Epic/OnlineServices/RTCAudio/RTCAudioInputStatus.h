#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int RTCAudioInputStatus_TypeDefinitionIndex = 43135;

	enum class RTCAudioInputStatus : ::System::Int32
	{
		Idle = 0,
		Recording = 1,
		RecordingSilent = 2,
		RecordingDisconnected = 3,
		Failed = 4,
	};
}
