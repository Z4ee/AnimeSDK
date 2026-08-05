#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int RunStateType_TypeDefinitionIndex = 40565;

	enum class RunStateType : ::System::Int32
	{
		WalkLoop = 3,
		Unknown = 0,
		WalkEnd = 4,
		RunEnd = 2,
		RunLoop = 1,
	};
}
