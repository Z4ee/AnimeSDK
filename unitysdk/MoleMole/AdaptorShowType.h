#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AdaptorShowType_TypeDefinitionIndex = 81558;

	enum class AdaptorShowType : ::System::Int32
	{
		MobileConsole = 3,
		Mobile = 0,
		Console = 2,
		PC = 1,
	};
}
