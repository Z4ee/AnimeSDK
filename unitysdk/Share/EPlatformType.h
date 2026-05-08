#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EPlatformType_TypeDefinitionIndex = 18356;

	enum class EPlatformType : ::System::Int32
	{
		EnumCount = 27,
		Android = 2,
		IOS = 1,
		CloudIOS = 10,
		Sony = 6,
		MacOS = 12,
		CloudMacOS = 13,
		Nintendo = 7,
		WEB = 4,
		WAP = 5,
		PC = 3,
		Unknown = 0,
		PS5 = 11,
		CloudPC = 9,
		Xbox = 26,
		CloudAndroid = 8,
	};
}
