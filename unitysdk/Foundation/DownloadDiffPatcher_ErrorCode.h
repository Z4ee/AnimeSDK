#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int DownloadDiffPatcher_ErrorCode_TypeDefinitionIndex = 80179;

	enum class DownloadDiffPatcher_ErrorCode : ::System::SByte
	{
		HDiffException = -2,
		VerifyError = -3,
		CollectError = -1,
		FileInvalid = -4,
		Succ = 0,
	};
}
