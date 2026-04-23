#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int AntiCheatCommonPlayerTakeDamageSource_TypeDefinitionIndex = 42468;

	enum class AntiCheatCommonPlayerTakeDamageSource : ::System::Int32
	{
		None = 0,
		Player = 1,
		NonPlayerCharacter = 2,
		World = 3,
	};
}
