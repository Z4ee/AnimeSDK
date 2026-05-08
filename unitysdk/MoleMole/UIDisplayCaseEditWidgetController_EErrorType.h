#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIDisplayCaseEditWidgetController_EErrorType_TypeDefinitionIndex = 80152;

	enum class UIDisplayCaseEditWidgetController_EErrorType : ::System::Int32
	{
		None = 0,
		Overflow = 2,
		CannotBag = 5,
		CannotSettle = 4,
		Overlap = 3,
		OutRange = 1,
	};
}
