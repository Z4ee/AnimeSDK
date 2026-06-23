#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int ReportErrorCode_TypeDefinitionIndex = 81472;

	enum class ReportErrorCode : ::System::Int32
	{
		OverwriteOldFileFailed = -9008,
		VerifyHashFailed = -9001,
	};
}
