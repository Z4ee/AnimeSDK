#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController_UIFadeState_TypeDefinitionIndex = 76174;

	enum class UIBaseController_UIFadeState : ::System::Int32
	{
		None = 0,
		FadingOut = 2,
		Other = 3,
		FadingIn = 1,
	};
}
