#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ChaseBailuResult_TypeDefinitionIndex = 56231;

	enum class ChaseBailuResult : ::System::Int32
	{
		Success = 0,
		MoveFail = 1,
		NoNextPoint = 2,
	};
}
