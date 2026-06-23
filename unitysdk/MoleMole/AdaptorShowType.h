#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AdaptorShowType_TypeDefinitionIndex = 81823;

	enum class AdaptorShowType : ::System::Int32
	{
		Console = 2,
		MobileConsole = 3,
		PC = 1,
		Mobile = 0,
	};
}
