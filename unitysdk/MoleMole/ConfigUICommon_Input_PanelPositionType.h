#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_Input_PanelPositionType_TypeDefinitionIndex = 52105;

	enum class ConfigUICommon_Input_PanelPositionType : ::System::Int32
	{
		Action = 2,
		None = 0,
		JoyStick = 1,
		QTE = 3,
	};
}
