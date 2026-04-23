#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int AntiCheatCommonClientAuthStatus_TypeDefinitionIndex = 42458;

	enum class AntiCheatCommonClientAuthStatus : ::System::Int32
	{
		Invalid = 0,
		LocalAuthComplete = 1,
		RemoteAuthComplete = 2,
	};
}
