#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDevice.h"
#include "unitysdk/UnityEngine/KeyCode.h"

namespace InControl { class InputDeviceProfile; }
namespace System { class String; }

#define INCONTROL_UNITYINPUTDEVICE_GET_ISKNOWN_OFFSET UNITYSDK_OFFSET(0x15D0D160)
#define INCONTROL_UNITYINPUTDEVICE_GET_ISSUPPORTEDONTHISPLATFORM_OFFSET UNITYSDK_OFFSET(0x15D0D5D0)
#define INCONTROL_UNITYINPUTDEVICE_GET_JOYSTICKID_OFFSET UNITYSDK_OFFSET(0x15D0BA40)
#define INCONTROL_UNITYINPUTDEVICE_GET_NUMUNKNOWNANALOGS_OFFSET UNITYSDK_OFFSET(0x15D0D180)
#define INCONTROL_UNITYINPUTDEVICE_GET_NUMUNKNOWNBUTTONS_OFFSET UNITYSDK_OFFSET(0x15D0D170)
#define INCONTROL_UNITYINPUTDEVICE_READRAWANALOGVALUE_OFFSET UNITYSDK_OFFSET(0x15D0D520)
#define INCONTROL_UNITYINPUTDEVICE_READRAWBUTTONSTATE_OFFSET UNITYSDK_OFFSET(0x15D0D470)
#define INCONTROL_UNITYINPUTDEVICE_SETUPANALOGQUERIES_OFFSET UNITYSDK_OFFSET(0x15D0C430)
#define INCONTROL_UNITYINPUTDEVICE_SETUPBUTTONQUERIES_OFFSET UNITYSDK_OFFSET(0x15D0CA30)
#define INCONTROL_UNITYINPUTDEVICE_SET_JOYSTICKID_OFFSET UNITYSDK_OFFSET(0x15D0BA50)
#define INCONTROL_UNITYINPUTDEVICE_UPDATE_OFFSET UNITYSDK_OFFSET(0x15D0D190)
#define INCONTROL_UNITYINPUTDEVICE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15D0BA70)
#define INCONTROL_UNITYINPUTDEVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x15D0BA60)

namespace InControl
{
	inline static constexpr unsigned int UnityInputDevice_TypeDefinitionIndex = 31481;

	class UnityInputDevice : public ::InControl::InputDevice
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_analogQueries()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UnityInputDevice_TypeDefinitionIndex)->GetStaticField(0x405C0);
		}
		static ::Il2CppArray<::UnityEngine::KeyCode>** StaticGet_buttonQueries()
		{
			return (::Il2CppArray<::UnityEngine::KeyCode>**)Il2CppClass::FromTypeDefinitionIndex(UnityInputDevice_TypeDefinitionIndex)->GetStaticField(0x405C8);
		}
		// static const ::System::Int32 MaxDevices = 0x8; // 0x0
		// static const ::System::Int32 MaxButtons = 0x14; // 0x0
		// static const ::System::Int32 MaxAnalogs = 0x14; // 0x0
		::InControl::InputDeviceProfile* profile; // 0x198
		::System::Int32 _JoystickId_k__BackingField; // 0x1A0

		::System::Void _ctor(::System::Int32 joystickId, ::System::String* joystickName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICE__CTOR_OFFSET))(this, joystickId, joystickName);
		}

		::System::Void _ctor_1(::InControl::InputDeviceProfile* deviceProfile, ::System::Int32 joystickId, ::System::String* joystickName)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceProfile*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICE__CTOR_1_OFFSET))(this, deviceProfile, joystickId, joystickName);
		}

		::System::Int32 get_JoystickId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICE_GET_JOYSTICKID_OFFSET))(this);
		}

		::System::Void set_JoystickId(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICE_SET_JOYSTICKID_OFFSET))(this, value);
		}

		::System::Void Update(::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICE_UPDATE_OFFSET))(this, updateTick, deltaTime);
		}

		static ::System::Void SetupAnalogQueries()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICE_SETUPANALOGQUERIES_OFFSET))();
		}

		static ::System::Void SetupButtonQueries()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICE_SETUPBUTTONQUERIES_OFFSET))();
		}

		::System::Boolean ReadRawButtonState(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICE_READRAWBUTTONSTATE_OFFSET))(this, index);
		}

		::System::Single ReadRawAnalogValue(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICE_READRAWANALOGVALUE_OFFSET))(this, index);
		}

		::System::Boolean get_IsSupportedOnThisPlatform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICE_GET_ISSUPPORTEDONTHISPLATFORM_OFFSET))(this);
		}

		::System::Boolean get_IsKnown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICE_GET_ISKNOWN_OFFSET))(this);
		}

		::System::Int32 get_NumUnknownButtons()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICE_GET_NUMUNKNOWNBUTTONS_OFFSET))(this);
		}

		::System::Int32 get_NumUnknownAnalogs()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICE_GET_NUMUNKNOWNANALOGS_OFFSET))(this);
		}
	};
}
