#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EFairyState_TypeDefinitionIndex = 10693;

	enum class EFairyState : ::System::Byte
	{
		Close = 0x1,
		EnumCount = 0x2,
		Unlock = 0x0,
	};
}
