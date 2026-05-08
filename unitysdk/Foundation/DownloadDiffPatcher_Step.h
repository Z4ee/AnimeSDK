#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int DownloadDiffPatcher_Step_TypeDefinitionIndex = 80176;

	enum class DownloadDiffPatcher_Step : ::System::Byte
	{
		DiffPatch = 0x2,
		Collect = 0x1,
		Finish = 0x4,
		Move = 0x3,
		Init = 0x0,
	};
}
