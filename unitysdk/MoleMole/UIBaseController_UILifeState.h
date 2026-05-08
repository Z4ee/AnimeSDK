#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController_UILifeState_TypeDefinitionIndex = 70938;

	enum class UIBaseController_UILifeState : ::System::Int32
	{
		Close = 4,
		Hide = 2,
		Hiding = 3,
		Create = 0,
		Show = 1,
		Destroyed = 5,
	};
}
