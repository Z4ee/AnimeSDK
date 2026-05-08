#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIMainPageShowSetting_PerformType_TypeDefinitionIndex = 53868;

	enum class ConfigUIMainPageShowSetting_PerformType : ::System::Byte
	{
		AnimationClip = 0x0,
		TimelinePrefab = 0x1,
		AnimatorController = 0x2,
	};
}
