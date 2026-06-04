#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/UnknownDeviceBindingSourceListener_DetectPhase.h"
#include "unitysdk/InControl/UnknownDeviceControl.h"
#include "unitysdk/System/Object.h"

namespace InControl { class BindingListenOptions; }
namespace InControl { class BindingSource; }
namespace InControl { class InputDevice; }

#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCELISTENER_ISPRESSED_OFFSET UNITYSDK_OFFSET(0x18124E80)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCELISTENER_LISTENFORCONTROL_OFFSET UNITYSDK_OFFSET(0x18124EC0)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCELISTENER_LISTEN_OFFSET UNITYSDK_OFFSET(0x18124C70)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCELISTENER_RESET_OFFSET UNITYSDK_OFFSET(0x18124B00)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCELISTENER_TAKESNAPSHOTONUNKNOWNDEVICES_OFFSET UNITYSDK_OFFSET(0x18124B70)
#define INCONTROL_UNKNOWNDEVICEBINDINGSOURCELISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x18125090)

namespace InControl
{
	inline static constexpr unsigned int UnknownDeviceBindingSourceListener_TypeDefinitionIndex = 37847;

	class UnknownDeviceBindingSourceListener : public ::System::Object
	{
	public:
		::InControl::UnknownDeviceControl detectFound; // 0x10
		::InControl::UnknownDeviceBindingSourceListener_DetectPhase detectPhase; // 0x1C

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
