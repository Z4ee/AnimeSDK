#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EArcanaType_TypeDefinitionIndex = 15409;

	enum class EArcanaType : ::System::Int16
	{
		EnumCount = 5,
		LiChang = 4,
		Dun = 1,
		HuoQiu = 2,
		Invalid = 0,
		FanJi = 3,
	};
}
