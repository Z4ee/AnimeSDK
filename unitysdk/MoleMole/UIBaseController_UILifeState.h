#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController_UILifeState_TypeDefinitionIndex = 76177;

	enum class UIBaseController_UILifeState : ::System::Int32
	{
		Hiding = 3,
		Show = 1,
		Hide = 2,
		Destroyed = 5,
		Create = 0,
		Close = 4,
	};
}
