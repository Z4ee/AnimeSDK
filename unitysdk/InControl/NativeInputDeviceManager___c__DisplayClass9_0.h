#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceInfo.h"
#include "unitysdk/System/Object.h"

namespace InControl { class InputDeviceProfile; }

#define INCONTROL_NATIVEINPUTDEVICEMANAGER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x132FD020)
#define INCONTROL_NATIVEINPUTDEVICEMANAGER___C__DISPLAYCLASS9_0__DETECTDEVICE_B__0_OFFSET UNITYSDK_OFFSET(0x132FDB80)
#define INCONTROL_NATIVEINPUTDEVICEMANAGER___C__DISPLAYCLASS9_0__DETECTDEVICE_B__1_OFFSET UNITYSDK_OFFSET(0x132FDC50)
#define INCONTROL_NATIVEINPUTDEVICEMANAGER___C__DISPLAYCLASS9_0__DETECTDEVICE_B__2_OFFSET UNITYSDK_OFFSET(0x132FDD20)
#define INCONTROL_NATIVEINPUTDEVICEMANAGER___C__DISPLAYCLASS9_0__DETECTDEVICE_B__3_OFFSET UNITYSDK_OFFSET(0x132FDDF0)

namespace InControl
{
	inline static constexpr unsigned int NativeInputDeviceManager___c__DisplayClass9_0_TypeDefinitionIndex = 38712;

	class NativeInputDeviceManager___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::InControl::InputDeviceInfo deviceInfo; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICEMANAGER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _DetectDevice_b__0(::InControl::InputDeviceProfile* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDeviceProfile*))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICEMANAGER___C__DISPLAYCLASS9_0__DETECTDEVICE_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _DetectDevice_b__1(::InControl::InputDeviceProfile* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDeviceProfile*))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICEMANAGER___C__DISPLAYCLASS9_0__DETECTDEVICE_B__1_OFFSET))(this, a1);
		}

		::System::Boolean _DetectDevice_b__2(::InControl::InputDeviceProfile* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDeviceProfile*))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICEMANAGER___C__DISPLAYCLASS9_0__DETECTDEVICE_B__2_OFFSET))(this, a1);
		}

		::System::Boolean _DetectDevice_b__3(::InControl::InputDeviceProfile* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDeviceProfile*))((::PBYTE)hIl2Cpp + INCONTROL_NATIVEINPUTDEVICEMANAGER___C__DISPLAYCLASS9_0__DETECTDEVICE_B__3_OFFSET))(this, a1);
		}
	};
}
