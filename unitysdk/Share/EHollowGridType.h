#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowGridType_TypeDefinitionIndex = 12649;

	enum class EHollowGridType : ::System::Byte
	{
		CommonGrid = 0x1,
		MiniGame = 0x2,
	};
}
