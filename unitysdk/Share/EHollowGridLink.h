#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowGridLink_TypeDefinitionIndex = 14926;

	enum class EHollowGridLink : ::System::Byte
	{
		Down = 0x2,
		Right = 0x4,
		Left = 0x8,
		All = 0xF,
		None = 0x0,
		Up = 0x1,
	};
}
