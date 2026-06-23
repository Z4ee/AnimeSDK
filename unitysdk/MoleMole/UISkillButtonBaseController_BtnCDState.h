#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UISkillButtonBaseController_BtnCDState_TypeDefinitionIndex = 83324;

	enum class UISkillButtonBaseController_BtnCDState : ::System::Int32
	{
		SilentCD = 1,
		CountCD = 3,
		ForceCD = 2,
		None = 0,
	};
}
