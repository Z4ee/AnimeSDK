#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPlayLightDiffusionAnimation_DiffusionType_TypeDefinitionIndex = 77896;

	enum class ConfigPlayLightDiffusionAnimation_DiffusionType : ::System::Int32
	{
		Expand = 1,
		Contract = 2,
		None = 0,
	};
}
