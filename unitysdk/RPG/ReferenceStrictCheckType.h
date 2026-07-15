#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG
{
	inline static constexpr unsigned int ReferenceStrictCheckType_TypeDefinitionIndex = 49391;

	enum class ReferenceStrictCheckType : ::System::Byte
	{
		AlwaysEnable = 0x0,
		OnlyEnableWhenDevelopment = 0x1,
		OnlyEnableInEditor = 0x2,
		AlwaysDisable = 0x3,
	};
}
