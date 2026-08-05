#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController_UIFadeState_TypeDefinitionIndex = 80103;

	enum class UIBaseController_UIFadeState : ::System::Int32
	{
		Other = 3,
		FadingIn = 1,
		FadingOut = 2,
		None = 0,
	};
}
