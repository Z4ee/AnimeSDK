#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_Input_PositionType_TypeDefinitionIndex = 91106;

	enum class ConfigUICommon_Input_PositionType : ::System::Int32
	{
		MiddleRight = 6,
		MiddleLeft = 3,
		UpperCenter = 310,
		JoyStick = 100,
		LowerOuterLeft = 200,
		LowerRight = 7,
		UpperLeft = 2,
		Center = 1,
		LowerLeft = 4,
		UpperRight = 5,
		None = 0,
	};
}
