#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int RTCParticipantStatus_TypeDefinitionIndex = 35334;

	enum class RTCParticipantStatus : ::System::Int32
	{
		Joined = 0,
		Left = 1,
	};
}
