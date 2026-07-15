#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceManager.h"

namespace InControl { class InputDeviceProfile; }
namespace InControl { class UnityInputDevice; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define INCONTROL_UNITYINPUTDEVICEMANAGER_ADDSYSTEMDEVICEPROFILES_OFFSET UNITYSDK_OFFSET(0xB55D950)
#define INCONTROL_UNITYINPUTDEVICEMANAGER_ADDSYSTEMDEVICEPROFILE_OFFSET UNITYSDK_OFFSET(0xB55ED60)
#define INCONTROL_UNITYINPUTDEVICEMANAGER_ATTACHDEVICES_OFFSET UNITYSDK_OFFSET(0xB55DC40)
#define INCONTROL_UNITYINPUTDEVICEMANAGER_ATTACHDEVICE_OFFSET UNITYSDK_OFFSET(0xB55E960)
#define INCONTROL_UNITYINPUTDEVICEMANAGER_DETACHDEVICES_OFFSET UNITYSDK_OFFSET(0xB55E030)
#define INCONTROL_UNITYINPUTDEVICEMANAGER_DETECTDEVICE_OFFSET UNITYSDK_OFFSET(0xB55EB60)
#define INCONTROL_UNITYINPUTDEVICEMANAGER_DETECTJOYSTICKDEVICE_OFFSET UNITYSDK_OFFSET(0xB55E120)
#define INCONTROL_UNITYINPUTDEVICEMANAGER_GET_JOYSTICKINFOHASCHANGED_OFFSET UNITYSDK_OFFSET(0xB55E010)
#define INCONTROL_UNITYINPUTDEVICEMANAGER_HASATTACHEDDEVICEWITHJOYSTICKID_OFFSET UNITYSDK_OFFSET(0xB55EA00)
#define INCONTROL_UNITYINPUTDEVICEMANAGER_QUERYJOYSTICKINFO_OFFSET UNITYSDK_OFFSET(0xB55DB40)
#define INCONTROL_UNITYINPUTDEVICEMANAGER_RELOADDEVICES_OFFSET UNITYSDK_OFFSET(0xB55E850)
#define INCONTROL_UNITYINPUTDEVICEMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0xB55DE40)
#define INCONTROL_UNITYINPUTDEVICEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xB55D770)

namespace InControl
{
	inline static constexpr unsigned int UnityInputDeviceManager_TypeDefinitionIndex = 38742;

	class UnityInputDeviceManager : public ::InControl::InputDeviceManager
	{
	public:
		// static const ::System::Single deviceRefreshInterval; // 0x0
		::Il2CppArray<::System::String*>* joystickNames; // 0x18
		::System::Collections::Generic::List_1<::InControl::InputDeviceProfile*>* customDeviceProfiles; // 0x20
		::System::Collections::Generic::List_1<::InControl::InputDeviceProfile*>* systemDeviceProfiles; // 0x28
		::System::Int32 lastJoystickCount; // 0x30
		::System::Int32 lastJoystickHash; // 0x34
		::System::Int32 joystickCount; // 0x38
		::System::Int32 joystickHash; // 0x3C
		::System::Single deviceRefreshTimer; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Update(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEMANAGER_UPDATE_OFFSET))(this, a1, a2);
		}

		::System::Void QueryJoystickInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEMANAGER_QUERYJOYSTICKINFO_OFFSET))(this);
		}

		::System::Boolean get_JoystickInfoHasChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEMANAGER_GET_JOYSTICKINFOHASCHANGED_OFFSET))(this);
		}

		::System::Void AttachDevices()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEMANAGER_ATTACHDEVICES_OFFSET))(this);
		}

		::System::Void DetachDevices()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEMANAGER_DETACHDEVICES_OFFSET))(this);
		}

		::System::Void ReloadDevices()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEMANAGER_RELOADDEVICES_OFFSET))(this);
		}

		::System::Void AttachDevice(::InControl::UnityInputDevice* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::UnityInputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEMANAGER_ATTACHDEVICE_OFFSET))(this, a1);
		}

		::System::Boolean HasAttachedDeviceWithJoystickId(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEMANAGER_HASATTACHEDDEVICEWITHJOYSTICKID_OFFSET))(this, a1);
		}

		::System::Void DetectJoystickDevice(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEMANAGER_DETECTJOYSTICKDEVICE_OFFSET))(this, a1, a2);
		}

		::InControl::InputDeviceProfile* DetectDevice(::System::String* a1)
		{
			return ((::InControl::InputDeviceProfile*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEMANAGER_DETECTDEVICE_OFFSET))(this, a1);
		}

		::System::Void AddSystemDeviceProfile(::InControl::InputDeviceProfile* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceProfile*))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEMANAGER_ADDSYSTEMDEVICEPROFILE_OFFSET))(this, a1);
		}

		::System::Void AddSystemDeviceProfiles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEMANAGER_ADDSYSTEMDEVICEPROFILES_OFFSET))(this);
		}
	};
}
