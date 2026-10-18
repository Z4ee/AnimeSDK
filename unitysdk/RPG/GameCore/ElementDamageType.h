#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElementDamageType_TypeDefinitionIndex = 24632;

	enum class ElementDamageType : ::System::Int32
	{
		Normal = 0,
		Super = 1,
	};
}
