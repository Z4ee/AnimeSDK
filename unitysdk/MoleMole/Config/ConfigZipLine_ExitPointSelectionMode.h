#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_ExitPointSelectionMode_TypeDefinitionIndex = 53005;

	enum class ConfigZipLine_ExitPointSelectionMode : ::System::Int32
	{
		None = 0,
		NavMesh = 1,
		SplineExit = 2,
	};
}
