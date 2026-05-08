#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int EUILayoutPlatform_TypeDefinitionIndex = 55695;

	enum class EUILayoutPlatform : ::System::Int32
	{
		MobileConsole = 4,
		Console = 3,
		Mobile = 1,
		PC = 2,
		None = 0,
	};
}
