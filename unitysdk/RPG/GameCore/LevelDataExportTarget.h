#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelDataExportTarget_TypeDefinitionIndex = 16480;

	enum class LevelDataExportTarget : ::System::Int32
	{
		None = 0,
		Dev = 1,
		Beta = 2,
		All = 3,
	};
}
