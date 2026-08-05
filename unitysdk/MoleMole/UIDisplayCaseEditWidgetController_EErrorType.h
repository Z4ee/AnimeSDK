#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIDisplayCaseEditWidgetController_EErrorType_TypeDefinitionIndex = 56115;

	enum class UIDisplayCaseEditWidgetController_EErrorType : ::System::Int32
	{
		Overlap = 3,
		Overflow = 2,
		CannotSettle = 4,
		None = 0,
		CannotBag = 5,
		OutRange = 1,
	};
}
