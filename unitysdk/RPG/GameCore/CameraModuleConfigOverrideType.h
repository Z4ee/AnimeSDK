#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CameraModuleConfigOverrideType_TypeDefinitionIndex = 23742;

	enum class CameraModuleConfigOverrideType : ::System::Int32
	{
		BattleTransitionModuleConfig = 0,
		DitherModuleConfig = 1,
		Freelook3rdModuleConfig = 2,
		ProtectModuleConfig = 3,
		ZoomModuleConfig = 4,
	};
}
