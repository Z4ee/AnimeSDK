#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EFairyState_TypeDefinitionIndex = 13836;

	enum class EFairyState : ::System::Byte
	{
		EnumCount = 0x2,
		Unlock = 0x0,
		Close = 0x1,
	};
}
