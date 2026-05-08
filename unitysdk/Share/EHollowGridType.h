#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowGridType_TypeDefinitionIndex = 12786;

	enum class EHollowGridType : ::System::Byte
	{
		MiniGame = 0x2,
		CommonGrid = 0x1,
	};
}
