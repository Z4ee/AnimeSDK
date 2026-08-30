#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CruiseSpeedSignType_TypeDefinitionIndex = 24387;

	enum class CruiseSpeedSignType : ::System::Int32
	{
		Inherit = 0,
		ModelMoveDir = 1,
		SpeedSign = 2,
	};
}
