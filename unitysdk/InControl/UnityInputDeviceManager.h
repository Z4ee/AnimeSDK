#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceManager.h"

namespace InControl { class InputDeviceProfile; }
namespace InControl { class UnityInputDevice; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define INCONTROL_UNITYINPUTDEVICEMANAGER_ADDSYSTEMDEVICEPROFILES_OFFSET UNITYSDK_OFFSET(0x1730B1E0)
#define INCONTROL_UNITYINPUTDEVICEMANAGER_ADDSYSTEMDEVICEPROFILE_OFFSET UNITYSDK_OFFSET(0x1730C440)
#define INCONTROL_UNITYINPUTDEVICEMANAGER_ATTACHDEVICES_OFFSET UNITYSDK_OFFSET(0x1730B450)
#define INCONTROL_UNITYINPUTDEVICEMANAGER_ATTACHDEVICE_OFFSET UNITYSDK_OFFSET(0x1730C0F0)
#define INCONTROL_UNITYINPUTDEVICEMANAGER_DETACHDEVICES_OFFSET UNITYSDK_OFFSET(0x1730B790)
#define INCONTROL_UNITYINPUTDEVICEMANAGER_DETECTDEVICE_OFFSET UNITYSDK_OFFSET(0x1730C280)
#define INCONTROL_UNITYINPUTDEVICEMANAGER_DETECTJOYSTICKDEVICE_OFFSET UNITYSDK_OFFSET(0x1730B850)
#define INCONTROL_UNITYINPUTDEVICEMANAGER_GET_JOYSTICKINFOHASCHANGED_OFFSET UNITYSDK_OFFSET(0x1730B770)
#define INCONTROL_UNITYINPUTDEVICEMANAGER_HASATTACHEDDEVICEWITHJOYSTICKID_OFFSET UNITYSDK_OFFSET(0x1730C140)
#define INCONTROL_UNITYINPUTDEVICEMANAGER_QUERYJOYSTICKINFO_OFFSET UNITYSDK_OFFSET(0x1730B350)
#define INCONTROL_UNITYINPUTDEVICEMANAGER_RELOADDEVICES_OFFSET UNITYSDK_OFFSET(0x1730BFE0)
#define INCONTROL_UNITYINPUTDEVICEMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1730B5A0)
#define INCONTROL_UNITYINPUTDEVICEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1730B000)

namespace InControl
{
	inline static constexpr unsigned int UnityInputDeviceManager_TypeDefinitionIndex = 37202;

	class UnityInputDeviceManager : public ::InControl::InputDeviceManager
	{
	public:
		// static const ::System::Single deviceRefreshInterval; // 0x0
		::System::Collections::Generic::List_1<::InControl::InputDeviceProfile*>* systemDeviceProfiles; // 0x18
		::System::Collections::Generic::List_1<::InControl::InputDeviceProfile*>* customDeviceProfiles; // 0x20
		::Il2CppArray<::System::String*>* joystickNames; // 0x28
		::System::Single deviceRefreshTimer; // 0x30
		::System::Int32 lastJoystickHash; // 0x34
		::System::Int32 lastJoystickCount; // 0x38
		::System::Int32 joystickHash; // 0x3C
		::System::Int32 joystickCount; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Update(::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEMANAGER_UPDATE_OFFSET))(this, updateTick, deltaTime);
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

		::System::Void AttachDevice(::InControl::UnityInputDevice* device)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::UnityInputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEMANAGER_ATTACHDEVICE_OFFSET))(this, device);
		}

		::System::Boolean HasAttachedDeviceWithJoystickId(::System::Int32 unityJoystickId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEMANAGER_HASATTACHEDDEVICEWITHJOYSTICKID_OFFSET))(this, unityJoystickId);
		}

		::System::Void DetectJoystickDevice(::System::Int32 unityJoystickId, ::System::String* unityJoystickName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEMANAGER_DETECTJOYSTICKDEVICE_OFFSET))(this, unityJoystickId, unityJoystickName);
		}

		::InControl::InputDeviceProfile* DetectDevice(::System::String* unityJoystickName)
		{
			return ((::InControl::InputDeviceProfile*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEMANAGER_DETECTDEVICE_OFFSET))(this, unityJoystickName);
		}

		::System::Void AddSystemDeviceProfile(::InControl::InputDeviceProfile* deviceProfile)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceProfile*))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEMANAGER_ADDSYSTEMDEVICEPROFILE_OFFSET))(this, deviceProfile);
		}

		::System::Void AddSystemDeviceProfiles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICEMANAGER_ADDSYSTEMDEVICEPROFILES_OFFSET))(this);
		}
	};
}
