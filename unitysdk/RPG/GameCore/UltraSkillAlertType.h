#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int UltraSkillAlertType_TypeDefinitionIndex = 23803;

	enum class UltraSkillAlertType : ::System::Int32
	{
		SkillConfirmButton = 0,
		SPInfo = 1,
	};
}
