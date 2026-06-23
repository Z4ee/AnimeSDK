#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowGridLink_TypeDefinitionIndex = 15308;

	enum class EHollowGridLink : ::System::Byte
	{
		Right = 0x4,
		Down = 0x2,
		Up = 0x1,
		None = 0x0,
		Left = 0x8,
		All = 0xF,
	};
}
