#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_ConfigTurnBack_ERotateType_TypeDefinitionIndex = 51225;

	enum class ConfigZipLine_ConfigTurnBack_ERotateType : ::System::Int32
	{
		RotateByRootMotion = 1,
		RotateByMixin = 0,
	};
}
