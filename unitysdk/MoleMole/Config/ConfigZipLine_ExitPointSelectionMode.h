#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_ExitPointSelectionMode_TypeDefinitionIndex = 51235;

	enum class ConfigZipLine_ExitPointSelectionMode : ::System::Int32
	{
		SplineExit = 2,
		None = 0,
		NavMesh = 1,
	};
}
