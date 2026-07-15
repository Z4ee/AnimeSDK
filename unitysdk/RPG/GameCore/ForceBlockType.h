#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ForceBlockType_TypeDefinitionIndex = 23571;

	enum class ForceBlockType : ::System::Int32
	{
		None = 10000,
		Hide = 10,
		HLOD = 20,
	};
}
