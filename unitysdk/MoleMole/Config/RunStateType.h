#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int RunStateType_TypeDefinitionIndex = 61056;

	enum class RunStateType : ::System::Int32
	{
		RunLoop = 1,
		WalkEnd = 4,
		Unknown = 0,
		WalkLoop = 3,
		RunEnd = 2,
	};
}
