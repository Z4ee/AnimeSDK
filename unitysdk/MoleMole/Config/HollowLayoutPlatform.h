#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowLayoutPlatform_TypeDefinitionIndex = 74466;

	enum class HollowLayoutPlatform : ::System::Int32
	{
		Mobile = 1,
		VirtualStick = 5,
		PC = 2,
		MobileConsole = 4,
		Console = 3,
		None = 0,
	};
}
