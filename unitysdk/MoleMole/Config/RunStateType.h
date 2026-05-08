#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int RunStateType_TypeDefinitionIndex = 48575;

	enum class RunStateType : ::System::Int32
	{
		RunLoop = 1,
		RunEnd = 2,
		WalkEnd = 4,
		Unknown = 0,
		WalkLoop = 3,
	};
}
