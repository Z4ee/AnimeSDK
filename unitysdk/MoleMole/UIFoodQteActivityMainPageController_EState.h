#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIFoodQteActivityMainPageController_EState_TypeDefinitionIndex = 50400;

	enum class UIFoodQteActivityMainPageController_EState : ::System::Int32
	{
		SelectLevel = 1,
		Settle = 3,
		None = 0,
		InGame = 2,
	};
}
