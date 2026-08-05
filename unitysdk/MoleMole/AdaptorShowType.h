#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AdaptorShowType_TypeDefinitionIndex = 40998;

	enum class AdaptorShowType : ::System::Int32
	{
		PC = 1,
		Mobile = 0,
		MobileConsole = 3,
		Console = 2,
	};
}
