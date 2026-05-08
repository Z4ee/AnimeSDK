#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EActionState_TypeDefinitionIndex = 17975;

	enum class EActionState : ::System::Int16
	{
		Finished = 2,
		EnumCount = 4,
		Running = 1,
		Init = 0,
		Error = 3,
	};
}
