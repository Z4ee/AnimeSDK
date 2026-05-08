#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPlayLightDiffusionAnimation_DiffusionType_TypeDefinitionIndex = 51331;

	enum class ConfigPlayLightDiffusionAnimation_DiffusionType : ::System::Int32
	{
		None = 0,
		Expand = 1,
		Contract = 2,
	};
}
