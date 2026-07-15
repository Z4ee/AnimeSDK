#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int AntiCheatCommonClientActionReason_TypeDefinitionIndex = 44121;

	enum class AntiCheatCommonClientActionReason : ::System::Int32
	{
		Invalid = 0,
		InternalError = 1,
		InvalidMessage = 2,
		AuthenticationFailed = 3,
		NullClient = 4,
		HeartbeatTimeout = 5,
		ClientViolation = 6,
		BackendViolation = 7,
		TemporaryCooldown = 8,
		TemporaryBanned = 9,
		PermanentBanned = 10,
	};
}
