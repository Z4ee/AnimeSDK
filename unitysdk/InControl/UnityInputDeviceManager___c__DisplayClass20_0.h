#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceInfo.h"
#include "unitysdk/System/Object.h"

namespace InControl { class InputDeviceProfile; }

#define INCONTROL_UNITYINPUTDEVICEMANAGER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15D0EA50)
#define INCONTROL_UNITYINPUTDEVICEMANAGER___C__DISPLAYCLASS20_0__DETECTDEVICE_B__0_OFFSET UNITYSDK_OFFSET(0x15D0EAB0)
#define INCONTROL_UNITYINPUTDEVICEMANAGER___C__DISPLAYCLASS20_0__DETECTDEVICE_B__1_OFFSET UNITYSDK_OFFSET(0x15D0EB80)
#define INCONTROL_UNITYINPUTDEVICEMANAGER___C__DISPLAYCLASS20_0__DETECTDEVICE_B__2_OFFSET UNITYSDK_OFFSET(0x15D0EC50)
#define INCONTROL_UNITYINPUTDEVICEMANAGER___C__DISPLAYCLASS20_0__DETECTDEVICE_B__3_OFFSET UNITYSDK_OFFSET(0x15D0ED20)

namespace InControl
{
	inline static constexpr unsigned int UnityInputDeviceManager___c__DisplayClass20_0_TypeDefinitionIndex = 31483;

	class UnityInputDeviceManager___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::InControl::InputDeviceInfo deviceInfo; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEMANAGER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _DetectDevice_b__0(::InControl::InputDeviceProfile* profile)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDeviceProfile*))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEMANAGER___C__DISPLAYCLASS20_0__DETECTDEVICE_B__0_OFFSET))(this, profile);
		}

		::System::Boolean _DetectDevice_b__1(::InControl::InputDeviceProfile* profile)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDeviceProfile*))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEMANAGER___C__DISPLAYCLASS20_0__DETECTDEVICE_B__1_OFFSET))(this, profile);
		}

		::System::Boolean _DetectDevice_b__2(::InControl::InputDeviceProfile* profile)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDeviceProfile*))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEMANAGER___C__DISPLAYCLASS20_0__DETECTDEVICE_B__2_OFFSET))(this, profile);
		}

		::System::Boolean _DetectDevice_b__3(::InControl::InputDeviceProfile* profile)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputDeviceProfile*))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEMANAGER___C__DISPLAYCLASS20_0__DETECTDEVICE_B__3_OFFSET))(this, profile);
		}
	};
}
