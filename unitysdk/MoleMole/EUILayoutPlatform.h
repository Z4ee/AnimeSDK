#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int EUILayoutPlatform_TypeDefinitionIndex = 82870;

	enum class EUILayoutPlatform : ::System::Int32
	{
		Console = 3,
		PC = 2,
		Mobile = 1,
		None = 0,
		MobileConsole = 4,
	};
}
