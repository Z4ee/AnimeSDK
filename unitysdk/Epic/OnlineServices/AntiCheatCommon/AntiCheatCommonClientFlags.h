#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int AntiCheatCommonClientFlags_TypeDefinitionIndex = 44123;

	enum class AntiCheatCommonClientFlags : ::System::Int32
	{
		None = 0,
		Admin = 1,
	};
}
