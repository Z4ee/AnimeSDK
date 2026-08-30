#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int ActiveSkillDescShowMode_TypeDefinitionIndex = 80654;

	enum class ActiveSkillDescShowMode : ::System::Int32
	{
		Normal = 0,
		AsPreLevel = 1,
		AsNextLevel = 2,
	};
}
