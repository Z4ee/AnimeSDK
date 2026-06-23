#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController_FadeFlag_TypeDefinitionIndex = 76180;

	enum class UIBaseController_FadeFlag : ::System::Int32
	{
		None = 0,
		Other = 4,
		FadeIn = 5,
		FadeOut = 3,
		Close = 2,
		Start = 1,
	};
}
