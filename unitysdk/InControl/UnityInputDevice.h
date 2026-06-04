#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDevice.h"
#include "unitysdk/UnityEngine/KeyCode.h"

namespace InControl { class InputDeviceProfile; }
namespace System { class String; }

#define INCONTROL_UNITYINPUTDEVICE_GET_ISKNOWN_OFFSET UNITYSDK_OFFSET(0x1811BCA0)
#define INCONTROL_UNITYINPUTDEVICE_GET_ISSUPPORTEDONTHISPLATFORM_OFFSET UNITYSDK_OFFSET(0x1811C0E0)
#define INCONTROL_UNITYINPUTDEVICE_GET_JOYSTICKID_OFFSET UNITYSDK_OFFSET(0x1811A580)
#define INCONTROL_UNITYINPUTDEVICE_GET_NUMUNKNOWNANALOGS_OFFSET UNITYSDK_OFFSET(0x1811BCC0)
#define INCONTROL_UNITYINPUTDEVICE_GET_NUMUNKNOWNBUTTONS_OFFSET UNITYSDK_OFFSET(0x1811BCB0)
#define INCONTROL_UNITYINPUTDEVICE_READRAWANALOGVALUE_OFFSET UNITYSDK_OFFSET(0x1811C070)
#define INCONTROL_UNITYINPUTDEVICE_READRAWBUTTONSTATE_OFFSET UNITYSDK_OFFSET(0x1811C000)
#define INCONTROL_UNITYINPUTDEVICE_SETUPANALOGQUERIES_OFFSET UNITYSDK_OFFSET(0x1811AEC0)
#define INCONTROL_UNITYINPUTDEVICE_SETUPBUTTONQUERIES_OFFSET UNITYSDK_OFFSET(0x1811B4B0)
#define INCONTROL_UNITYINPUTDEVICE_SET_JOYSTICKID_OFFSET UNITYSDK_OFFSET(0x1811A590)
#define INCONTROL_UNITYINPUTDEVICE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1811BCD0)
#define INCONTROL_UNITYINPUTDEVICE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1811A5B0)
#define INCONTROL_UNITYINPUTDEVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1811A5A0)

namespace InControl
{
	inline static constexpr unsigned int UnityInputDevice_TypeDefinitionIndex = 37933;

	class UnityInputDevice : public ::InControl::InputDevice
	{
	public:
		static ::Il2CppArray<::UnityEngine::KeyCode>** StaticGet_buttonQueries()
		{
			return (::Il2CppArray<::UnityEngine::KeyCode>**)Il2CppClass::FromTypeDefinitionIndex(UnityInputDevice_TypeDefinitionIndex)->GetStaticField(0x17840);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_analogQueries()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UnityInputDevice_TypeDefinitionIndex)->GetStaticField(0x17848);
		}
		// static const ::System::Int32 MaxDevices = 0x8; // 0x0
		// static const ::System::Int32 MaxButtons = 0x14; // 0x0
		// static const ::System::Int32 MaxAnalogs = 0x14; // 0x0
		::InControl::InputDeviceProfile* profile; // 0x198
		::System::Int32 _JoystickId_k__BackingField; // 0x1A0

		::System::Void _ctor(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::InControl::InputDeviceProfile* a1, ::System::Int32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceProfile*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICE__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 get_JoystickId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICE_GET_JOYSTICKID_OFFSET))(this);
		}

		::System::Void set_JoystickId(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICE_SET_JOYSTICKID_OFFSET))(this, a1);
		}

		::System::Void Update(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICE_UPDATE_OFFSET))(this, a1, a2);
		}

		static ::System::Void SetupAnalogQueries()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICE_SETUPANALOGQUERIES_OFFSET))();
		}

		static ::System::Void SetupButtonQueries()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICE_SETUPBUTTONQUERIES_OFFSET))();
		}

		::System::Boolean ReadRawButtonState(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICE_READRAWBUTTONSTATE_OFFSET))(this, a1);
		}

		::System::Single ReadRawAnalogValue(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_UNITYINPUTDEVICE_READRAWANALOGVALUE_OFFSET))(this, a1);
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
