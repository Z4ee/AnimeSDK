#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define SUPERSCROLLVIEW_CLICKEVENTLISTENER_GET_ISPRESSD_OFFSET UNITYSDK_OFFSET(0x197F3B90)
#define SUPERSCROLLVIEW_CLICKEVENTLISTENER_GET_OFFSET UNITYSDK_OFFSET(0x197F3AC0)
#define SUPERSCROLLVIEW_CLICKEVENTLISTENER_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x197F3BA0)
#define SUPERSCROLLVIEW_CLICKEVENTLISTENER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x197F3D70)
#define SUPERSCROLLVIEW_CLICKEVENTLISTENER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x197F3DF0)
#define SUPERSCROLLVIEW_CLICKEVENTLISTENER_SETCLICKEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x197F3C30)
#define SUPERSCROLLVIEW_CLICKEVENTLISTENER_SETDOUBLECLICKEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0x197F3C80)
#define SUPERSCROLLVIEW_CLICKEVENTLISTENER_SETPOINTERDOWNHANDLER_OFFSET UNITYSDK_OFFSET(0x197F3CD0)
#define SUPERSCROLLVIEW_CLICKEVENTLISTENER_SETPOINTERUPHANDLER_OFFSET UNITYSDK_OFFSET(0x197F3D20)
#define SUPERSCROLLVIEW_CLICKEVENTLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x197F3E70)

namespace SuperScrollView
{
	inline static constexpr unsigned int ClickEventListener_TypeDefinitionIndex = 48087;

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

		static ::SuperScrollView::ClickEventListener* Get(::UnityEngine::GameObject* a1)
		{
			return ((::SuperScrollView::ClickEventListener*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_CLICKEVENTLISTENER_GET_OFFSET))(a1);
		}

		::System::Boolean get_IsPressd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_CLICKEVENTLISTENER_GET_ISPRESSD_OFFSET))(this);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_CLICKEVENTLISTENER_ONPOINTERCLICK_OFFSET))(this, a1);
		}

		::System::Void SetClickEventHandler(::System::Action_1<::UnityEngine::GameObject*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_CLICKEVENTLISTENER_SETCLICKEVENTHANDLER_OFFSET))(this, a1);
		}

		::System::Void SetDoubleClickEventHandler(::System::Action_1<::UnityEngine::GameObject*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_CLICKEVENTLISTENER_SETDOUBLECLICKEVENTHANDLER_OFFSET))(this, a1);
		}

		::System::Void SetPointerDownHandler(::System::Action_1<::UnityEngine::GameObject*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_CLICKEVENTLISTENER_SETPOINTERDOWNHANDLER_OFFSET))(this, a1);
		}

		::System::Void SetPointerUpHandler(::System::Action_1<::UnityEngine::GameObject*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_CLICKEVENTLISTENER_SETPOINTERUPHANDLER_OFFSET))(this, a1);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_CLICKEVENTLISTENER_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_CLICKEVENTLISTENER_ONPOINTERUP_OFFSET))(this, a1);
		}
	};
}
