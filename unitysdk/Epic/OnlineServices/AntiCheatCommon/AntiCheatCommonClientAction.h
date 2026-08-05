#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int AntiCheatCommonClientAction_TypeDefinitionIndex = 36897;

	enum class AntiCheatCommonClientAction : ::System::Int32
	{
		Invalid = 0,
		RemovePlayer = 1,
	};
}
