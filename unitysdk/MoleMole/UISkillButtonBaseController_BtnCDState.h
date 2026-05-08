#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UISkillButtonBaseController_BtnCDState_TypeDefinitionIndex = 65482;

	enum class UISkillButtonBaseController_BtnCDState : ::System::Int32
	{
		None = 0,
		CountCD = 3,
		SilentCD = 1,
		ForceCD = 2,
	};
}
