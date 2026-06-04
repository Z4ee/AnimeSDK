#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputControlType.h"
#include "unitysdk/InControl/InputDeviceStyle.h"
#include "unitysdk/System/Object.h"

#define INCONTROL_INPUTDEVICESTYLEEXTENSIONS_LEFTCOMMANDCONTROL_OFFSET UNITYSDK_OFFSET(0x17FB5530)
#define INCONTROL_INPUTDEVICESTYLEEXTENSIONS_RIGHTCOMMANDCONTROL_OFFSET UNITYSDK_OFFSET(0x17FB5550)

namespace InControl
{
	inline static constexpr unsigned int InputDeviceStyleExtensions_TypeDefinitionIndex = 37883;

	class InputDeviceStyleExtensions : public ::System::Object
	{
	public:
		// static const ::InControl::InputControlType defaultLeftCommandControl; // 0x0
		// static const ::InControl::InputControlType defaultRightCommandControl; // 0x0

		static ::InControl::InputControlType LeftCommandControl(::InControl::InputDeviceStyle a1)
		{
			return ((::InControl::InputControlType(*)(::InControl::InputDeviceStyle))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICESTYLEEXTENSIONS_LEFTCOMMANDCONTROL_OFFSET))(a1);
		}

		static ::InControl::InputControlType RightCommandControl(::InControl::InputDeviceStyle a1)
		{
			return ((::InControl::InputControlType(*)(::InControl::InputDeviceStyle))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICESTYLEEXTENSIONS_RIGHTCOMMANDCONTROL_OFFSET))(a1);
		}
	};
}
