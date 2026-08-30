#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtSkillUseType_TypeDefinitionIndex = 17453;

	enum class RtSkillUseType : ::System::Int32
	{
		Passive = 1,
		SelectEntity = 2,
	};
}
