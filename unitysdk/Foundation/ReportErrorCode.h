#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int ReportErrorCode_TypeDefinitionIndex = 83290;

	enum class ReportErrorCode : ::System::Int32
	{
		VerifyHashFailed = -9001,
		OverwriteOldFileFailed = -9008,
	};
}
