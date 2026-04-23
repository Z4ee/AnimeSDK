#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int AntiCheatCommonEventType_TypeDefinitionIndex = 42464;

	enum class AntiCheatCommonEventType : ::System::Int32
	{
		Invalid = 0,
		GameEvent = 1,
		PlayerEvent = 2,
	};
}
