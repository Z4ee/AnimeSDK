#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebFeature_TypeDefinitionIndex = 8069;

	enum class WebFeature : ::System::Int32
	{
		None = 0,
		TimeoutEnable = 1,
		HandleWebError = 2,
		NavigationBarEnable = 2,
		All = 255,
	};
}
