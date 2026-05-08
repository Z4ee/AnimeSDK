#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EListSpecialOpt_TypeDefinitionIndex = 17027;

	enum class EListSpecialOpt : ::System::Int16
	{
		Pop = 1,
		Count = 0,
		EnumCount = 2,
	};
}
