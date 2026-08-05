#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EActionState_TypeDefinitionIndex = 11496;

	enum class EActionState : ::System::Int16
	{
		Finished = 2,
		EnumCount = 4,
		Error = 3,
		Init = 0,
		Running = 1,
	};
}
