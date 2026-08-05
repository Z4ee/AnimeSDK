#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController_UILifeState_TypeDefinitionIndex = 80105;

	enum class UIBaseController_UILifeState : ::System::Int32
	{
		Show = 1,
		Hiding = 3,
		Hide = 2,
		Close = 4,
		Create = 0,
		Destroyed = 5,
	};
}
