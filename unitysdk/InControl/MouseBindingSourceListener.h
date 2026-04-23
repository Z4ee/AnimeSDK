#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/Mouse.h"
#include "unitysdk/System/Object.h"

namespace InControl { class BindingListenOptions; }
namespace InControl { class BindingSource; }
namespace InControl { class InputDevice; }

#define INCONTROL_MOUSEBINDINGSOURCELISTENER_ISPRESSED_OFFSET UNITYSDK_OFFSET(0x1717E420)
#define INCONTROL_MOUSEBINDINGSOURCELISTENER_LISTENFORCONTROL_OFFSET UNITYSDK_OFFSET(0x1717E710)
#define INCONTROL_MOUSEBINDINGSOURCELISTENER_LISTEN_OFFSET UNITYSDK_OFFSET(0x1717E3A0)
#define INCONTROL_MOUSEBINDINGSOURCELISTENER_RESET_OFFSET UNITYSDK_OFFSET(0x1717E390)
#define INCONTROL_MOUSEBINDINGSOURCELISTENER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1717EA30)
#define INCONTROL_MOUSEBINDINGSOURCELISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1717EA20)

namespace InControl
{
	inline static constexpr unsigned int MouseBindingSourceListener_TypeDefinitionIndex = 37109;

	class MouseBindingSourceListener : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet_ScrollWheelThreshold()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MouseBindingSourceListener_TypeDefinitionIndex)->GetStaticField(0x4B90);
		}
		::System::Int32 detectPhase; // 0x10
		::InControl::Mouse detectFound; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCELISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCELISTENER__CCTOR_OFFSET))();
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCELISTENER_RESET_OFFSET))(this);
		}

		::InControl::BindingSource* Listen(::InControl::BindingListenOptions* listenOptions, ::InControl::InputDevice* device)
		{
			return ((::InControl::BindingSource*(*)(::PVOID, ::InControl::BindingListenOptions*, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCELISTENER_LISTEN_OFFSET))(this, listenOptions, device);
		}

		::System::Boolean IsPressed(::InControl::Mouse control)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::Mouse))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCELISTENER_ISPRESSED_OFFSET))(this, control);
		}

		::InControl::Mouse ListenForControl(::InControl::BindingListenOptions* listenOptions)
		{
			return ((::InControl::Mouse(*)(::PVOID, ::InControl::BindingListenOptions*))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCELISTENER_LISTENFORCONTROL_OFFSET))(this, listenOptions);
		}
	};
}
