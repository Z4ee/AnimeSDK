#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ViewModeSwitchType_TypeDefinitionIndex = 23801;

	enum class ViewModeSwitchType : ::System::Int32
	{
		All = 0,
		Enter = 1,
		EnterTransition = 2,
		Exist = 3,
		ExistTransition = 4,
	};
}
