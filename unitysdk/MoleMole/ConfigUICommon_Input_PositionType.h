#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_Input_PositionType_TypeDefinitionIndex = 52102;

	enum class ConfigUICommon_Input_PositionType : ::System::Int32
	{
		MiddleLeft = 3,
		MiddleRight = 6,
		UpperRight = 5,
		Center = 1,
		UpperLeft = 2,
		LowerOuterLeft = 200,
		None = 0,
		LowerLeft = 4,
		LowerRight = 7,
		JoyStick = 100,
	};
}
