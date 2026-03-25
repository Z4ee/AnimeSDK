#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputControlType.h"
#include "unitysdk/InControl/InputDeviceStyle.h"
#include "unitysdk/System/Object.h"

#define INCONTROL_INPUTDEVICESTYLEEXTENSIONS_LEFTCOMMANDCONTROL_OFFSET UNITYSDK_OFFSET(0x15B6F850)
#define INCONTROL_INPUTDEVICESTYLEEXTENSIONS_RIGHTCOMMANDCONTROL_OFFSET UNITYSDK_OFFSET(0x15B6F870)

namespace InControl
{
	inline static constexpr unsigned int InputDeviceStyleExtensions_TypeDefinitionIndex = 31431;

	class InputDeviceStyleExtensions : public ::System::Object
	{
	public:
		// static const ::InControl::InputControlType defaultLeftCommandControl; // 0x0
		// static const ::InControl::InputControlType defaultRightCommandControl; // 0x0

		static ::InControl::InputControlType LeftCommandControl(::InControl::InputDeviceStyle deviceStyle)
		{
			return ((::InControl::InputControlType(*)(::InControl::InputDeviceStyle))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICESTYLEEXTENSIONS_LEFTCOMMANDCONTROL_OFFSET))(deviceStyle);
		}

		static ::InControl::InputControlType RightCommandControl(::InControl::InputDeviceStyle deviceStyle)
		{
			return ((::InControl::InputControlType(*)(::InControl::InputDeviceStyle))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICESTYLEEXTENSIONS_RIGHTCOMMANDCONTROL_OFFSET))(deviceStyle);
		}
	};
}
