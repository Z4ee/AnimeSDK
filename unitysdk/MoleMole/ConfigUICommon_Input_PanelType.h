#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_Input_PanelType_TypeDefinitionIndex = 52107;

	enum class ConfigUICommon_Input_PanelType : ::System::Int32
	{
		InLevel_JoyStick = 11,
		BigScene_JoyStick = 61,
		BigScene_Action = 62,
		TriggerTPS_JoyStick = 51,
		Hollow_JoyStick = 31,
		Bangkov_JoyStick = 71,
		MainCity_Action = 22,
		InLevel_Action = 12,
		None = 0,
		Bangkov_Action = 72,
		Bangboo_JoyStick = 41,
		Bangboo_Action = 42,
		TriggerTPS_Action = 52,
		InLevel_QTE = 13,
		MainCity_JoyStick = 21,
	};
}
