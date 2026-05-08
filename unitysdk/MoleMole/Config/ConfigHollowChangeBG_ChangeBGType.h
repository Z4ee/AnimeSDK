#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChangeBG_ChangeBGType_TypeDefinitionIndex = 58972;

	enum class ConfigHollowChangeBG_ChangeBGType : ::System::Int32
	{
		DefaultToVideoBg = 0,
		VideoToDefaultBg = 1,
	};
}
