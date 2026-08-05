#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_Input_PanelType_TypeDefinitionIndex = 91102;

	enum class ConfigUICommon_Input_PanelType : ::System::Int32
	{
		Hollow_JoyStick = 31,
		MainCity_JoyStick = 21,
		None = 0,
		MainCity_Action = 22,
		InLevel_QTE = 13,
		TriggerTPS_JoyStick = 51,
		InLevel_JoyStick = 11,
		InLevel_Action = 12,
		TriggerTPS_Action = 52,
		BigScene_Action = 62,
		Bangkov_Action = 72,
		Bangkov_JoyStick = 71,
		BigScene_JoyStick = 61,
		Bangboo_Action = 42,
		Bangboo_JoyStick = 41,
	};
}
