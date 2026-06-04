#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/EventTrigger.h"

namespace RPG::Client { class EventTriggerListener_VoidBaseEventDataDelegate; }
namespace RPG::Client { class EventTriggerListener_VoidDelegate; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_EVENTTRIGGERLISTENER_GET_OFFSET UNITYSDK_OFFSET(0xB938E70)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_IGNOREHANDLER_OFFSET UNITYSDK_OFFSET(0xB939560)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xB9393E0)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONDESELECT_OFFSET UNITYSDK_OFFSET(0xB9392E0)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB9396F0)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONDRAG_OFFSET UNITYSDK_OFFSET(0xB939460)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONDROP_OFFSET UNITYSDK_OFFSET(0xB939670)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xB9394E0)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0xB938FD0)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xB939060)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0xB939160)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0xB9391E0)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xB9390E0)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONSELECT_OFFSET UNITYSDK_OFFSET(0xB939260)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0xB938F40)
#define RPG_CLIENT_EVENTTRIGGERLISTENER_ONUPDATESELECTED_OFFSET UNITYSDK_OFFSET(0xB939360)
#define RPG_CLIENT_EVENTTRIGGERLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0xB939760)
#define RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xB939800)
#define RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONDESELECT_OFFSET UNITYSDK_OFFSET(0xB9397E0)
#define RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONDRAG_OFFSET UNITYSDK_OFFSET(0xB939810)
#define RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONDROP_OFFSET UNITYSDK_OFFSET(0xB939830)
#define RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xB939820)
#define RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0xB939790)
#define RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xB9397A0)
#define RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0xB9397C0)
#define RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0xB939770)
#define RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xB9397B0)
#define RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONSELECT_OFFSET UNITYSDK_OFFSET(0xB9397D0)
#define RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0xB939780)
#define RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONUPDATESELECTED_OFFSET UNITYSDK_OFFSET(0xB9397F0)

namespace RPG::Client
{
	inline static constexpr unsigned int EventTriggerListener_TypeDefinitionIndex = 67769;

	class EventTriggerListener : public ::UnityEngine::EventSystems::EventTrigger
	{
	public:
		::RPG::Client::EventTriggerListener_VoidDelegate* OnClickTrigger; // 0x20
		::RPG::Client::EventTriggerListener_VoidBaseEventDataDelegate* OnSubmitTrigger; // 0x28
		::RPG::Client::EventTriggerListener_VoidDelegate* OnDownTrigger; // 0x30
		::RPG::Client::EventTriggerListener_VoidDelegate* OnUpTrigger; // 0x38
		::RPG::Client::EventTriggerListener_VoidDelegate* OnEnterTrigger; // 0x40
		::RPG::Client::EventTriggerListener_VoidDelegate* OnExitTrigger; // 0x48
		::RPG::Client::EventTriggerListener_VoidBaseEventDataDelegate* OnSelectTrigger; // 0x50
		::RPG::Client::EventTriggerListener_VoidBaseEventDataDelegate* OnDeselectTrigger; // 0x58
		::RPG::Client::EventTriggerListener_VoidBaseEventDataDelegate* OnUpdateSelectTrigger; // 0x60
		::RPG::Client::EventTriggerListener_VoidDelegate* OnBeginDragTrigger; // 0x68
		::RPG::Client::EventTriggerListener_VoidDelegate* OnEndDragTrigger; // 0x70
		::RPG::Client::EventTriggerListener_VoidDelegate* OnDragTrigger; // 0x78
		::RPG::Client::EventTriggerListener_VoidDelegate* OnDropTrigger; // 0x80
		::System::Boolean ShareDrag; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::EventTriggerListener* Get(::UnityEngine::GameObject* a1)
		{
			return ((::RPG::Client::EventTriggerListener*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_GET_OFFSET))(a1);
		}

		::System::Void OnSubmit(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONSUBMIT_OFFSET))(this, a1);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONPOINTERCLICK_OFFSET))(this, a1);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONPOINTERUP_OFFSET))(this, a1);
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONPOINTERENTER_OFFSET))(this, a1);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONPOINTEREXIT_OFFSET))(this, a1);
		}

		::System::Void OnSelect(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONSELECT_OFFSET))(this, a1);
		}

		::System::Void OnDeselect(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONDESELECT_OFFSET))(this, a1);
		}

		::System::Void OnUpdateSelected(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONUPDATESELECTED_OFFSET))(this, a1);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONENDDRAG_OFFSET))(this, a1);
		}

		::System::Boolean IgnoreHandler(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_IGNOREHANDLER_OFFSET))(this, a1);
		}

		::System::Void OnDrop(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONDROP_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER_ONDESTROY_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnPointerExit(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONPOINTEREXIT_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnSubmit(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONSUBMIT_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnPointerClick(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONPOINTERCLICK_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONPOINTERUP_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONPOINTERENTER_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnSelect(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONSELECT_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnDeselect(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONDESELECT_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnUpdateSelected(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONUPDATESELECTED_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnEndDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONENDDRAG_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnDrop(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVENTTRIGGERLISTENER___IFIXBASEPROXY_ONDROP_OFFSET))(this, a1);
		}
	};
}
