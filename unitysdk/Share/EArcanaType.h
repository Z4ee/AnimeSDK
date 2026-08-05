#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EArcanaType_TypeDefinitionIndex = 11086;

	enum class EArcanaType : ::System::Int16
	{
		EnumCount = 5,
		FanJi = 3,
		Dun = 1,
		HuoQiu = 2,
		Invalid = 0,
		LiChang = 4,
	};
}
