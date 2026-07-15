#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraEyeDetailType_TypeDefinitionIndex = 12514;

	enum class ChimeraEyeDetailType : ::System::Int32
	{
		None = 0,
		Default = 1,
		CloseHalf = 2,
		Stupid = 3,
		CloseLeft = 4,
		CloseRight = 5,
	};
}
