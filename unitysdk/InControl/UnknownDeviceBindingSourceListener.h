#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/UnknownDeviceBindingSourceListener_DetectPhase.h"
#include "unitysdk/InControl/UnknownDeviceControl.h"
#include "unitysdk/System/Object.h"

namespace InControl { class BindingListenOptions; }
namespace InControl { class BindingSource; }
namespace InControl { class InputDevice; }

#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCELISTENER_ISPRESSED_OFFSET UNITYSDK_OFFSET(0x1B65C690)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCELISTENER_LISTENFORCONTROL_OFFSET UNITYSDK_OFFSET(0x1B65C6D0)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCELISTENER_LISTEN_OFFSET UNITYSDK_OFFSET(0x1B65C410)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCELISTENER_RESET_OFFSET UNITYSDK_OFFSET(0x1B65C230)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCELISTENER_TAKESNAPSHOTONUNKNOWNDEVICES_OFFSET UNITYSDK_OFFSET(0x1B65C2A0)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCELISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B65C850)

namespace InControl
{
	inline static constexpr unsigned int UnknownDeviceBindingSourceListener_TypeDefinitionIndex = 39514;

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

		::InControl::BindingSource* Listen(::InControl::BindingListenOptions* a1, ::InControl::InputDevice* a2)
		{
			return ((::InControl::BindingSource*(*)(::PVOID, ::InControl::BindingListenOptions*, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCELISTENER_LISTEN_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsPressed(::InControl::UnknownDeviceControl a1, ::InControl::InputDevice* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::UnknownDeviceControl, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCELISTENER_ISPRESSED_OFFSET))(this, a1, a2);
		}

		::InControl::UnknownDeviceControl ListenForControl(::InControl::BindingListenOptions* a1, ::InControl::InputDevice* a2)
		{
			return ((::InControl::UnknownDeviceControl(*)(::PVOID, ::InControl::BindingListenOptions*, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_UNKNOWNDEVICEBINDINGSOURCELISTENER_LISTENFORCONTROL_OFFSET))(this, a1, a2);
		}
	};
}
