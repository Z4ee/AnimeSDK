#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LimaoNewsPostSubmitType_TypeDefinitionIndex = 13419;

	enum class LimaoNewsPostSubmitType : ::System::Int32
	{
		Manual = 0,
		Auto = 1,
		Disabled = 2,
	};
}
