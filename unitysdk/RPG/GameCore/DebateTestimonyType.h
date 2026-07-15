#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DebateTestimonyType_TypeDefinitionIndex = 23725;

	enum class DebateTestimonyType : ::System::Int32
	{
		Defualt = 0,
		AfterAsk = 1,
		LastStatement = 2,
	};
}
