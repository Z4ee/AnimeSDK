#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController_UIFadeState_TypeDefinitionIndex = 70943;

	enum class UIBaseController_UIFadeState : ::System::Int32
	{
		Other = 3,
		None = 0,
		FadingOut = 2,
		FadingIn = 1,
	};
}
