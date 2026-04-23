#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputControlType.h"
#include "unitysdk/System/Object.h"

namespace InControl { class BindingListenOptions; }
namespace InControl { class BindingSource; }
namespace InControl { class InputControl; }
namespace InControl { class InputDevice; }

#define INCONTROL_DEVICEBINDINGSOURCELISTENER_ISCONTROLTYPEINARRAY_OFFSET UNITYSDK_OFFSET(0x17165BA0)
#define INCONTROL_DEVICEBINDINGSOURCELISTENER_ISPRESSED_1_OFFSET UNITYSDK_OFFSET(0x17165AB0)
#define INCONTROL_DEVICEBINDINGSOURCELISTENER_ISPRESSED_2_OFFSET UNITYSDK_OFFSET(0x17165610)
#define INCONTROL_DEVICEBINDINGSOURCELISTENER_ISPRESSED_OFFSET UNITYSDK_OFFSET(0x17165A60)
#define INCONTROL_DEVICEBINDINGSOURCELISTENER_LISTENFORCONTROL_OFFSET UNITYSDK_OFFSET(0x17165690)
#define INCONTROL_DEVICEBINDINGSOURCELISTENER_LISTEN_OFFSET UNITYSDK_OFFSET(0x171654C0)
#define INCONTROL_DEVICEBINDINGSOURCELISTENER_RESET_OFFSET UNITYSDK_OFFSET(0x171654B0)
#define INCONTROL_DEVICEBINDINGSOURCELISTENER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17165BF0)
#define INCONTROL_DEVICEBINDINGSOURCELISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x17165BE0)

namespace InControl
{
	inline static constexpr unsigned int DeviceBindingSourceListener_TypeDefinitionIndex = 37102;

	class DeviceBindingSourceListener : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_maxSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DeviceBindingSourceListener_TypeDefinitionIndex)->GetStaticField(0x4600);
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

		::InControl::BindingSource* Listen(::InControl::BindingListenOptions* listenOptions, ::InControl::InputDevice* device)
		{
			return ((::InControl::BindingSource*(*)(::PVOID, ::InControl::BindingListenOptions*, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCELISTENER_LISTEN_OFFSET))(this, listenOptions, device);
		}

		::System::Boolean IsPressed(::InControl::InputControl* control)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputControl*))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCELISTENER_ISPRESSED_OFFSET))(this, control);
		}

		::System::Boolean IsPressed_1(::InControl::InputControlType control, ::InControl::InputDevice* device)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputControlType, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCELISTENER_ISPRESSED_1_OFFSET))(this, control, device);
		}

		::System::Boolean IsPressed_2(::Il2CppArray<::InControl::InputControlType>* controls, ::InControl::InputDevice* device)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::InControl::InputControlType>*, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCELISTENER_ISPRESSED_2_OFFSET))(this, controls, device);
		}

		::Il2CppArray<::InControl::InputControlType>* ListenForControl(::InControl::BindingListenOptions* listenOptions, ::InControl::InputDevice* device, ::Il2CppArray<::InControl::InputControlType>* lastInputControl, ::System::Boolean defaultInheritLastInput)
		{
			return ((::Il2CppArray<::InControl::InputControlType>*(*)(::PVOID, ::InControl::BindingListenOptions*, ::InControl::InputDevice*, ::Il2CppArray<::InControl::InputControlType>*, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCELISTENER_LISTENFORCONTROL_OFFSET))(this, listenOptions, device, lastInputControl, defaultInheritLastInput);
		}

		::System::Boolean IsControlTypeInArray(::InControl::InputControlType control, ::Il2CppArray<::InControl::InputControlType>* controlTypes)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputControlType, ::Il2CppArray<::InControl::InputControlType>*))((::PBYTE)hIl2Cpp + INCONTROL_DEVICEBINDINGSOURCELISTENER_ISCONTROLTYPEINARRAY_OFFSET))(this, control, controlTypes);
		}
	};
}
