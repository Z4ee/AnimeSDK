#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtSubPropertyType_TypeDefinitionIndex = 51525;

	enum class RtSubPropertyType : ::System::Int32
	{
		Base = 0,
		Ratio = 1,
		Delta = 2,
		Convert = 3,
	};
}
