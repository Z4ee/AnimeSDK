#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::ReporterUtil
{
	inline static constexpr unsigned int ReporterDataItem_ItemField_TypeDefinitionIndex = 44869;

	enum class ReporterDataItem_ItemField : ::System::Int32
	{
		Duration = 0,
		StartTime = 1,
	};
}
