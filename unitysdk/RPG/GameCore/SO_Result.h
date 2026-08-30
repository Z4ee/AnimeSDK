#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SO_Result_TypeDefinitionIndex = 15466;

	enum class SO_Result : ::System::Int32
	{
		Success = 0,
		Fail = 1,
	};
}
