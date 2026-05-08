#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EReportType_TypeDefinitionIndex = 11080;

	enum class EReportType : ::System::Int16
	{
		Task = 2,
		Fairy = 0,
		DialogInFairy = 3,
		Dialog = 1,
	};
}
