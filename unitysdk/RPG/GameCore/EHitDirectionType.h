#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EHitDirectionType_TypeDefinitionIndex = 10120;

	enum class EHitDirectionType : ::System::Int32
	{
		Forward = 0,
		Back = 1,
		Left = 2,
		Right = 3,
	};
}
