#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIChatWindowWidgetController_DataRefreshType_TypeDefinitionIndex = 72756;

	enum class UIChatWindowWidgetController_DataRefreshType : ::System::Int32
	{
		New = 2,
		All = 7,
		Nothing = 4,
		None = 0,
		History = 1,
	};
}
