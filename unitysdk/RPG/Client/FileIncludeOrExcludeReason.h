#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int FileIncludeOrExcludeReason_TypeDefinitionIndex = 33844;

	enum class FileIncludeOrExcludeReason : ::System::Int32
	{
		eDefault = 0,
		eNotIncludeExtName = 1,
		eExcludeExtName = 2,
		eIncludeFile = 3,
		eExcludeFile = 4,
		eIncludePath = 5,
		eNotIncludePath = 6,
		eExcludePath = 7,
	};
}
