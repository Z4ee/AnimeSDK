#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomConfig_InGamePreviewSwitchMode_TypeDefinitionIndex = 34352;

	enum class CriAtomConfig_InGamePreviewSwitchMode : ::System::Int32
	{
		Disable = 0,
		Enable = 1,
		FollowBuildSetting = 2,
		Default = 3,
	};
}
