#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int DownloadDiffPatcher_Step_TypeDefinitionIndex = 63141;

	enum class DownloadDiffPatcher_Step : ::System::Byte
	{
		Collect = 0x1,
		Init = 0x0,
		Move = 0x3,
		Finish = 0x4,
		DiffPatch = 0x2,
	};
}
