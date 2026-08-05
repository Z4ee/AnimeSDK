#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChangeBG_ChangeBGType_TypeDefinitionIndex = 49416;

	enum class ConfigHollowChangeBG_ChangeBGType : ::System::Int32
	{
		VideoToDefaultBg = 1,
		DefaultToVideoBg = 0,
	};
}
