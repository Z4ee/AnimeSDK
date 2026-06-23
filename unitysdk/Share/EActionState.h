#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EActionState_TypeDefinitionIndex = 9204;

	enum class EActionState : ::System::Int16
	{
		EnumCount = 4,
		Running = 1,
		Error = 3,
		Init = 0,
		Finished = 2,
	};
}
