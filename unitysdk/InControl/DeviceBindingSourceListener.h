#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputControlType.h"
#include "unitysdk/System/Object.h"

namespace InControl { class BindingListenOptions; }
namespace InControl { class BindingSource; }
namespace InControl { class InputControl; }
namespace InControl { class InputDevice; }

#define INCONTROL_DEVICEBINDINGSOURCELISTENER_ISCONTROLTYPEINARRAY_OFFSET UNITYSDK_OFFSET(0x18E7D460)
#define INCONTROL_DEVICEBINDINGSOURCELISTENER_ISPRESSED_1_OFFSET UNITYSDK_OFFSET(0x18E7D380)
#define INCONTROL_DEVICEBINDINGSOURCELISTENER_ISPRESSED_2_OFFSET UNITYSDK_OFFSET(0x18E7CDD0)
#define INCONTROL_DEVICEBINDINGSOURCELISTENER_ISPRESSED_OFFSET UNITYSDK_OFFSET(0x18E7D330)
#define INCONTROL_DEVICEBINDINGSOURCELISTENER_LISTENFORCONTROL_OFFSET UNITYSDK_OFFSET(0x18E7CE40)
#define INCONTROL_DEVICEBINDINGSOURCELISTENER_LISTEN_OFFSET UNITYSDK_OFFSET(0x18E7CB00)
#define INCONTROL_DEVICEBINDINGSOURCELISTENER_RESET_OFFSET UNITYSDK_OFFSET(0x18E7CAF0)
#define INCONTROL_DEVICEBINDINGSOURCELISTENER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18E7D4B0)
#define INCONTROL_DEVICEBINDINGSOURCELISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x18E7D4A0)

namespace InControl
{
	inline static constexpr unsigned int DeviceBindingSourceListener_TypeDefinitionIndex = 39501;

	class DeviceBindingSourceListener : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_maxSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DeviceBindingSourceListener_TypeDefinitionIndex)->GetStaticField(0x9E0);
		}
		::Il2CppArray<::InControl::InputControlType>* detectFound; // 0x10
		::System::Int32 detectPhase; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCELISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCELISTENER__CCTOR_OFFSET))();
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCELISTENER_RESET_OFFSET))(this);
		}

		::InControl::BindingSource* Listen(::InControl::BindingListenOptions* a1, ::InControl::InputDevice* a2)
		{
			return ((::InControl::BindingSource*(*)(::PVOID, ::InControl::BindingListenOptions*, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCELISTENER_LISTEN_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsPressed(::InControl::InputControl* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputControl*))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCELISTENER_ISPRESSED_OFFSET))(this, a1);
		}

		::System::Boolean IsPressed_1(::InControl::InputControlType a1, ::InControl::InputDevice* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputControlType, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCELISTENER_ISPRESSED_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsPressed_2(::Il2CppArray<::InControl::InputControlType>* a1, ::InControl::InputDevice* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::InControl::InputControlType>*, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCELISTENER_ISPRESSED_2_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::InControl::InputControlType>* ListenForControl(::InControl::BindingListenOptions* a1, ::InControl::InputDevice* a2, ::Il2CppArray<::InControl::InputControlType>* a3, ::System::Boolean a4)
		{
			return ((::Il2CppArray<::InControl::InputControlType>*(*)(::PVOID, ::InControl::BindingListenOptions*, ::InControl::InputDevice*, ::Il2CppArray<::InControl::InputControlType>*, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCELISTENER_LISTENFORCONTROL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean IsControlTypeInArray(::InControl::InputControlType a1, ::Il2CppArray<::InControl::InputControlType>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputControlType, ::Il2CppArray<::InControl::InputControlType>*))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCELISTENER_ISCONTROLTYPEINARRAY_OFFSET))(this, a1, a2);
		}
	};
}
