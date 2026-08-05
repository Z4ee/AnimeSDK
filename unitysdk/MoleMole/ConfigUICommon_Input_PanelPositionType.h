#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_Input_PanelPositionType_TypeDefinitionIndex = 91104;

	enum class ConfigUICommon_Input_PanelPositionType : ::System::Int32
	{
		None = 0,
		Action = 2,
		JoyStick = 1,
		QTE = 3,
	};
}
