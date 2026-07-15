#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int NPCBornType_TypeDefinitionIndex = 10129;

	enum class NPCBornType : ::System::Int32
	{
		Permanent = 1,
		Mission = 2,
	};
}
