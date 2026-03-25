#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDevice.h"

#define INCONTROL_TOUCHINPUTDEVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x15C0D5A0)

namespace InControl
{
	inline static constexpr unsigned int TouchInputDevice_TypeDefinitionIndex = 31471;

	class TouchInputDevice : public ::InControl::InputDevice
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_TOUCHINPUTDEVICE__CTOR_OFFSET))(this);
		}
	};
}
