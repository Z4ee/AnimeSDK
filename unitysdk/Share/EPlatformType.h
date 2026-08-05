#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EPlatformType_TypeDefinitionIndex = 10791;

	enum class EPlatformType : ::System::Int32
	{
		WAP = 5,
		WEB = 4,
		Unknown = 0,
		CloudPC = 9,
		Xbox = 26,
		CloudAndroid = 8,
		Nintendo = 7,
		EnumCount = 31,
		Sony = 6,
		MacOS = 12,
		CloudIOS = 10,
		Xbox_PC = 29,
		Xbox_HELD = 30,
		IOS = 1,
		PC = 3,
		CloudMacOS = 13,
		Android = 2,
		PS5 = 11,
	};
}
