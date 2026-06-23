#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowLayoutPlatform_TypeDefinitionIndex = 60763;

	enum class HollowLayoutPlatform : ::System::Int32
	{
		Mobile = 1,
		PC = 2,
		VirtualStick = 5,
		MobileConsole = 4,
		None = 0,
		Console = 3,
	};
}
