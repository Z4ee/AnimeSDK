#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define SUPERSCROLLVIEW_CLICKEVENTLISTENER_GET_ISPRESSD_OFFSET UNITYSDK_OFFSET(0xB956A50)
#define SUPERSCROLLVIEW_CLICKEVENTLISTENER_GET_OFFSET UNITYSDK_OFFSET(0xB956980)
#define SUPERSCROLLVIEW_CLICKEVENTLISTENER_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0xB956A60)
#define SUPERSCROLLVIEW_CLICKEVENTLISTENER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xB956C30)
#define SUPERSCROLLVIEW_CLICKEVENTLISTENER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xB956CA0)
#define SUPERSCROLLVIEW_CLICKEVENTLISTENER_SETCLICKEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0xB956AF0)
#define SUPERSCROLLVIEW_CLICKEVENTLISTENER_SETDOUBLECLICKEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0xB956B40)
#define SUPERSCROLLVIEW_CLICKEVENTLISTENER_SETPOINTERDOWNHANDLER_OFFSET UNITYSDK_OFFSET(0xB956B90)
#define SUPERSCROLLVIEW_CLICKEVENTLISTENER_SETPOINTERUPHANDLER_OFFSET UNITYSDK_OFFSET(0xB956BE0)
#define SUPERSCROLLVIEW_CLICKEVENTLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0xB956D10)

namespace SuperScrollView
{
	inline static constexpr unsigned int ClickEventListener_TypeDefinitionIndex = 44371;

	class ClickEventListener : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action_1<::UnityEngine::GameObject*>* mClickedHandler; // 0x18
		::System::Action_1<::UnityEngine::GameObject*>* mDoubleClickedHandler; // 0x20
		::System::Action_1<::UnityEngine::GameObject*>* mOnPointerDownHandler; // 0x28
		::System::Action_1<::UnityEngine::GameObject*>* mOnPointerUpHandler; // 0x30
		::System::Boolean mIsPressed; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_CLICKEVENTLISTENER__CTOR_OFFSET))(this);
		}

		static ::SuperScrollView::ClickEventListener* Get(::UnityEngine::GameObject* obj)
		{
			return ((::SuperScrollView::ClickEventListener*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_CLICKEVENTLISTENER_GET_OFFSET))(obj);
		}

		::System::Boolean get_IsPressd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_CLICKEVENTLISTENER_GET_ISPRESSD_OFFSET))(this);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_CLICKEVENTLISTENER_ONPOINTERCLICK_OFFSET))(this, eventData);
		}

		::System::Void SetClickEventHandler(::System::Action_1<::UnityEngine::GameObject*>* handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_CLICKEVENTLISTENER_SETCLICKEVENTHANDLER_OFFSET))(this, handler);
		}

		::System::Void SetDoubleClickEventHandler(::System::Action_1<::UnityEngine::GameObject*>* handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_CLICKEVENTLISTENER_SETDOUBLECLICKEVENTHANDLER_OFFSET))(this, handler);
		}

		::System::Void SetPointerDownHandler(::System::Action_1<::UnityEngine::GameObject*>* handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_CLICKEVENTLISTENER_SETPOINTERDOWNHANDLER_OFFSET))(this, handler);
		}

		::System::Void SetPointerUpHandler(::System::Action_1<::UnityEngine::GameObject*>* handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_CLICKEVENTLISTENER_SETPOINTERUPHANDLER_OFFSET))(this, handler);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_CLICKEVENTLISTENER_ONPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_CLICKEVENTLISTENER_ONPOINTERUP_OFFSET))(this, eventData);
		}
	};
}
