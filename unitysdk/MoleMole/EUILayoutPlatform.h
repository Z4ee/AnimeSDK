#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int EUILayoutPlatform_TypeDefinitionIndex = 62558;

	enum class EUILayoutPlatform : ::System::Int32
	{
		Console = 3,
		PC = 2,
		None = 0,
		MobileConsole = 4,
		Mobile = 1,
	};
}
