#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowGridLink_TypeDefinitionIndex = 15266;

	enum class EHollowGridLink : ::System::Byte
	{
		None = 0x0,
		Down = 0x2,
		Up = 0x1,
		All = 0xF,
		Left = 0x8,
		Right = 0x4,
	};
}
