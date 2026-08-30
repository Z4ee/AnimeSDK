#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NewWindowAction_TypeDefinitionIndex = 8049;

	enum class NewWindowAction : ::System::Int32
	{
		Ignore = 1,
		Redirect = 2,
		NewBrowser = 3,
		NewWindow = 4,
	};
}
