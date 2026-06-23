#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIDisplayCaseEditWidgetController_EErrorType_TypeDefinitionIndex = 46405;

	enum class UIDisplayCaseEditWidgetController_EErrorType : ::System::Int32
	{
		CannotBag = 5,
		OutRange = 1,
		None = 0,
		CannotSettle = 4,
		Overlap = 3,
		Overflow = 2,
	};
}
