#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EOptionIconState_TypeDefinitionIndex = 17802;

	enum class EOptionIconState : ::System::Int16
	{
		None = 0,
		EnumCount = 4,
		Reduce = 3,
		Replace = 2,
		Add = 1,
	};
}
