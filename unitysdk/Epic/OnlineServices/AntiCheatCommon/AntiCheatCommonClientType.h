#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int AntiCheatCommonClientType_TypeDefinitionIndex = 44126;

	enum class AntiCheatCommonClientType : ::System::Int32
	{
		ProtectedClient = 0,
		UnprotectedClient = 1,
		AIBot = 2,
	};
}
