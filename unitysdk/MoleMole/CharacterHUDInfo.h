#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int CharacterHUDInfo_TypeDefinitionIndex = 70914;

	struct alignas(4) CharacterHUDInfo
	{
		::System::Single HudOffsetX; // 0x10
		::System::Single HudOffsetY; // 0x14
	};
}
