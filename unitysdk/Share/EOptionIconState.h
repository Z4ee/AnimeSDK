#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EOptionIconState_TypeDefinitionIndex = 17336;

	enum class EOptionIconState : ::System::Int16
	{
		Reduce = 3,
		Replace = 2,
		EnumCount = 4,
		None = 0,
		Add = 1,
	};
}
