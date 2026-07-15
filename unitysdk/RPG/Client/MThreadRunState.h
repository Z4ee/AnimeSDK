#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MThreadRunState_TypeDefinitionIndex = 56799;

	enum class MThreadRunState : ::System::Int32
	{
		eNone = 0,
		eRun = 1,
		eEnd = 2,
	};
}
