#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EOptionIconState_TypeDefinitionIndex = 11930;

	enum class EOptionIconState : ::System::Int16
	{
		None = 0,
		Replace = 2,
		Add = 1,
		EnumCount = 4,
		Reduce = 3,
	};
}
