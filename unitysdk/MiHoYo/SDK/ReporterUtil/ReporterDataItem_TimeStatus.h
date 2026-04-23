#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::ReporterUtil
{
	inline static constexpr unsigned int ReporterDataItem_TimeStatus_TypeDefinitionIndex = 43206;

	enum class ReporterDataItem_TimeStatus : ::System::Int32
	{
		None = 0,
		BeginTimeSetted = 1,
		EndTimeSetted = 2,
	};
}
