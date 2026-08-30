#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class ColliderButton_PointerEvent; }
namespace RPG::Client { class ColliderButton_VoidEvent; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define RPG_CLIENT_COLLIDERBUTTON_ADDCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A277660)
#define RPG_CLIENT_COLLIDERBUTTON_ADDDOWNCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A277720)
#define RPG_CLIENT_COLLIDERBUTTON_ADDDRAGCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A277780)
#define RPG_CLIENT_COLLIDERBUTTON_ADDUPCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A2776C0)
#define RPG_CLIENT_COLLIDERBUTTON_GET_OFFSET UNITYSDK_OFFSET(0x1A2773B0)
#define RPG_CLIENT_COLLIDERBUTTON_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1A2775D0)
#define RPG_CLIENT_COLLIDERBUTTON_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1A277440)
#define RPG_CLIENT_COLLIDERBUTTON_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1A277510)
#define RPG_CLIENT_COLLIDERBUTTON_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1A2774B0)
#define RPG_CLIENT_COLLIDERBUTTON_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x1A277570)
#define RPG_CLIENT_COLLIDERBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0x1A277830)

namespace RPG::Client
{
	inline static constexpr unsigned int ColliderButton_TypeDefinitionIndex = 72442;

	class ColliderButton : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::ColliderButton_VoidEvent* OnClickEvent; // 0x18
		::RPG::Client::ColliderButton_VoidEvent* UpEvent; // 0x20
		::RPG::Client::ColliderButton_VoidEvent* DownEvent; // 0x28
		::RPG::Client::ColliderButton_PointerEvent* DragEvent; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLLIDERBUTTON__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ColliderButton* Get(::UnityEngine::GameObject* a1)
		{
			return ((::RPG::Client::ColliderButton*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLLIDERBUTTON_GET_OFFSET))(a1);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLLIDERBUTTON_ONPOINTERCLICK_OFFSET))(this, a1);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLLIDERBUTTON_ONPOINTERUP_OFFSET))(this, a1);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLLIDERBUTTON_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void OnSubmit(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLLIDERBUTTON_ONSUBMIT_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLLIDERBUTTON_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void AddClickCallback(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLLIDERBUTTON_ADDCLICKCALLBACK_OFFSET))(this, a1);
		}

		::System::Void AddUpCallback(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLLIDERBUTTON_ADDUPCALLBACK_OFFSET))(this, a1);
		}

		::System::Void AddDownCallback(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLLIDERBUTTON_ADDDOWNCALLBACK_OFFSET))(this, a1);
		}

		::System::Void AddDragCallback(::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::PointerEventData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COLLIDERBUTTON_ADDDRAGCALLBACK_OFFSET))(this, a1);
		}
	};
}
