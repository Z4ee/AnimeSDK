#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController_FadeFlag_TypeDefinitionIndex = 70930;

	enum class UIBaseController_FadeFlag : ::System::Int32
	{
		FadeIn = 5,
		Other = 4,
		Start = 1,
		Close = 2,
		None = 0,
		FadeOut = 3,
	};
}
