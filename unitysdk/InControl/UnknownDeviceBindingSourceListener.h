#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/UnknownDeviceBindingSourceListener_DetectPhase.h"
#include "unitysdk/InControl/UnknownDeviceControl.h"
#include "unitysdk/System/Object.h"

namespace InControl { class BindingListenOptions; }
namespace InControl { class BindingSource; }
namespace InControl { class InputDevice; }

#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCELISTENER_ISPRESSED_OFFSET UNITYSDK_OFFSET(0x17315FA0)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCELISTENER_LISTENFORCONTROL_OFFSET UNITYSDK_OFFSET(0x17315FE0)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCELISTENER_LISTEN_OFFSET UNITYSDK_OFFSET(0x17315D90)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCELISTENER_RESET_OFFSET UNITYSDK_OFFSET(0x17315C20)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCELISTENER_TAKESNAPSHOTONUNKNOWNDEVICES_OFFSET UNITYSDK_OFFSET(0x17315C90)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCELISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x173161B0)

namespace InControl
{
	inline static constexpr unsigned int UnknownDeviceBindingSourceListener_TypeDefinitionIndex = 37115;

	class UnknownDeviceBindingSourceListener : public ::System::Object
	{
	public:
		::InControl::UnknownDeviceBindingSourceListener_DetectPhase detectPhase; // 0x10
		::InControl::UnknownDeviceControl detectFound; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCELISTENER__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCELISTENER_RESET_OFFSET))(this);
		}

		::System::Void TakeSnapshotOnUnknownDevices()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCELISTENER_TAKESNAPSHOTONUNKNOWNDEVICES_OFFSET))(this);
		}

		::InControl::BindingSource* Listen(::InControl::BindingListenOptions* listenOptions, ::InControl::InputDevice* device)
		{
			return ((::InControl::BindingSource*(*)(::PVOID, ::InControl::BindingListenOptions*, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCELISTENER_LISTEN_OFFSET))(this, listenOptions, device);
		}

		::System::Boolean IsPressed(::InControl::UnknownDeviceControl control, ::InControl::InputDevice* device)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::UnknownDeviceControl, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCELISTENER_ISPRESSED_OFFSET))(this, control, device);
		}

		::InControl::UnknownDeviceControl ListenForControl(::InControl::BindingListenOptions* listenOptions, ::InControl::InputDevice* device)
		{
			return ((::InControl::UnknownDeviceControl(*)(::PVOID, ::InControl::BindingListenOptions*, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCELISTENER_LISTENFORCONTROL_OFFSET))(this, listenOptions, device);
		}
	};
}
