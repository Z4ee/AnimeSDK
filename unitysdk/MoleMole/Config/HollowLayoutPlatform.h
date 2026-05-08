#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowLayoutPlatform_TypeDefinitionIndex = 38921;

	enum class HollowLayoutPlatform : ::System::Int32
	{
		VirtualStick = 5,
		MobileConsole = 4,
		Mobile = 1,
		PC = 2,
		None = 0,
		Console = 3,
	};
}
