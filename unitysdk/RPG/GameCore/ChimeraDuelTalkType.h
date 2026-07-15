#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelTalkType_TypeDefinitionIndex = 10759;

	enum class ChimeraDuelTalkType : ::System::Int32
	{
		None = 0,
		Chimera = 1,
		Master = 2,
		Common = 3,
	};
}
