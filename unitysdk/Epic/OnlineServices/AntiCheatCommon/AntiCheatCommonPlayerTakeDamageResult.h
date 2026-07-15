#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int AntiCheatCommonPlayerTakeDamageResult_TypeDefinitionIndex = 44131;

	enum class AntiCheatCommonPlayerTakeDamageResult : ::System::Int32
	{
		None = 0,
		Downed = 1,
		Eliminated = 2,
	};
}
