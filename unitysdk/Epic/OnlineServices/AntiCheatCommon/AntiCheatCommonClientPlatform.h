#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int AntiCheatCommonClientPlatform_TypeDefinitionIndex = 44125;

	enum class AntiCheatCommonClientPlatform : ::System::Int32
	{
		Unknown = 0,
		Windows = 1,
		Mac = 2,
		Linux = 3,
		Xbox = 4,
		PlayStation = 5,
		Nintendo = 6,
		iOS = 7,
		Android = 8,
	};
}
