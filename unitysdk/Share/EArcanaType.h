#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EArcanaType_TypeDefinitionIndex = 11830;

	enum class EArcanaType : ::System::Int16
	{
		FanJi = 3,
		LiChang = 4,
		EnumCount = 5,
		HuoQiu = 2,
		Invalid = 0,
		Dun = 1,
	};
}
