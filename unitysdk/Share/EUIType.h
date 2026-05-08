#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EUIType_TypeDefinitionIndex = 12608;

	enum class EUIType : ::System::Int16
	{
		EnumCount = 4,
		Default = 0,
		Archive = 3,
		HollowQuest = 2,
		None = 1,
	};
}
