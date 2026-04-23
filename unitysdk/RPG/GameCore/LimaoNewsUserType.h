#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LimaoNewsUserType_TypeDefinitionIndex = 13176;

	enum class LimaoNewsUserType : ::System::Int32
	{
		None = 0,
		Official = 1,
		Partner = 2,
	};
}
