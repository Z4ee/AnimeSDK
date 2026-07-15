#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/Mouse.h"
#include "unitysdk/System/Object.h"

namespace InControl { class BindingListenOptions; }
namespace InControl { class BindingSource; }
namespace InControl { class InputDevice; }

#define INCONTROL_MOUSEBINDINGSOURCELISTENER_ISPRESSED_OFFSET UNITYSDK_OFFSET(0x1734CD90)
#define INCONTROL_MOUSEBINDINGSOURCELISTENER_LISTENFORCONTROL_OFFSET UNITYSDK_OFFSET(0x1734D070)
#define INCONTROL_MOUSEBINDINGSOURCELISTENER_LISTEN_OFFSET UNITYSDK_OFFSET(0x1734CD10)
#define INCONTROL_MOUSEBINDINGSOURCELISTENER_RESET_OFFSET UNITYSDK_OFFSET(0x1734CD00)
#define INCONTROL_MOUSEBINDINGSOURCELISTENER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1734D380)
#define INCONTROL_MOUSEBINDINGSOURCELISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1734D370)

namespace InControl
{
	inline static constexpr unsigned int MouseBindingSourceListener_TypeDefinitionIndex = 38649;

	class MouseBindingSourceListener : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet_ScrollWheelThreshold()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MouseBindingSourceListener_TypeDefinitionIndex)->GetStaticField(0x6750);
		}
		::InControl::Mouse detectFound; // 0x10
		::System::Int32 detectPhase; // 0x14

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

		::InControl::BindingSource* Listen(::InControl::BindingListenOptions* a1, ::InControl::InputDevice* a2)
		{
			return ((::InControl::BindingSource*(*)(::PVOID, ::InControl::BindingListenOptions*, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCELISTENER_LISTEN_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsPressed(::InControl::Mouse a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::Mouse))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCELISTENER_ISPRESSED_OFFSET))(this, a1);
		}

		::InControl::Mouse ListenForControl(::InControl::BindingListenOptions* a1)
		{
			return ((::InControl::Mouse(*)(::PVOID, ::InControl::BindingListenOptions*))((::PBYTE)hIl2Cpp + INCONTROL_MOUSEBINDINGSOURCELISTENER_LISTENFORCONTROL_OFFSET))(this, a1);
		}
	};
}
