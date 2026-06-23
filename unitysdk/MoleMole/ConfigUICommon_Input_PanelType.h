#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_Input_PanelType_TypeDefinitionIndex = 61654;

	enum class ConfigUICommon_Input_PanelType : ::System::Int32
	{
		Hollow_JoyStick = 31,
		BigScene_JoyStick = 61,
		InLevel_JoyStick = 11,
		MainCity_JoyStick = 21,
		TriggerTPS_Action = 52,
		Bangkov_Action = 72,
		InLevel_QTE = 13,
		InLevel_Action = 12,
		TriggerTPS_JoyStick = 51,
		Bangboo_JoyStick = 41,
		Bangkov_JoyStick = 71,
		MainCity_Action = 22,
		None = 0,
		Bangboo_Action = 42,
		BigScene_Action = 62,
	};
}
