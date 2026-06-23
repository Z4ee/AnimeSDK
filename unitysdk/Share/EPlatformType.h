#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EPlatformType_TypeDefinitionIndex = 14269;

	enum class EPlatformType : ::System::Int32
	{
		Nintendo = 7,
		PC = 3,
		CloudIOS = 10,
		PS5 = 11,
		EnumCount = 31,
		Xbox = 26,
		Unknown = 0,
		CloudAndroid = 8,
		Xbox_HELD = 30,
		Android = 2,
		CloudPC = 9,
		CloudMacOS = 13,
		MacOS = 12,
		WEB = 4,
		Sony = 6,
		IOS = 1,
		Xbox_PC = 29,
		WAP = 5,
	};
}
