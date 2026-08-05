#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController_FadeFlag_TypeDefinitionIndex = 80102;

	enum class UIBaseController_FadeFlag : ::System::Int32
	{
		Close = 2,
		FadeOut = 3,
		Other = 4,
		None = 0,
		Start = 1,
		FadeIn = 5,
	};
}
