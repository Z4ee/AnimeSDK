#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EReportType_TypeDefinitionIndex = 15663;

	enum class EReportType : ::System::Int16
	{
		Fairy = 0,
		Task = 2,
		Dialog = 1,
		DialogInFairy = 3,
	};
}
