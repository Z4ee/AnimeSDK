#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_Input_PositionType_TypeDefinitionIndex = 61659;

	enum class ConfigUICommon_Input_PositionType : ::System::Int32
	{
		LowerRight = 7,
		MiddleLeft = 3,
		Center = 1,
		MiddleRight = 6,
		LowerOuterLeft = 200,
		None = 0,
		JoyStick = 100,
		UpperLeft = 2,
		LowerLeft = 4,
		UpperRight = 5,
	};
}
