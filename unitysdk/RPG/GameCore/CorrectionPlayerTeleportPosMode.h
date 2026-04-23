#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CorrectionPlayerTeleportPosMode_TypeDefinitionIndex = 19460;

	enum class CorrectionPlayerTeleportPosMode : ::System::Int32
	{
		MapTeleportPos = 0,
		AnchorPos = 1,
	};
}
