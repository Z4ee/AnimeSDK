#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int JoinRoomFlags_TypeDefinitionIndex = 41530;

	enum class JoinRoomFlags : ::System::UInt32
	{
		None = 0x0,
		EnableEcho = 0x1,
	};
}
