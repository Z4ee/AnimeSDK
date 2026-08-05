#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int DownloadDiffPatcher_ErrorCode_TypeDefinitionIndex = 52895;

	enum class DownloadDiffPatcher_ErrorCode : ::System::SByte
	{
		FileInvalid = -4,
		HDiffException = -2,
		CollectError = -1,
		VerifyError = -3,
		Succ = 0,
	};
}
