#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SO_Params_TypeDefinitionIndex = 19043;

	enum class SO_Params : ::System::Int32
	{
		Custom = 0,
		UseComponent = 1,
		BornSmartOjbect = 2,
	};
}
