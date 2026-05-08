#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIChatWindowWidgetController_DataRefreshType_TypeDefinitionIndex = 66832;

	enum class UIChatWindowWidgetController_DataRefreshType : ::System::Int32
	{
		None = 0,
		Nothing = 4,
		New = 2,
		History = 1,
		All = 7,
	};
}
