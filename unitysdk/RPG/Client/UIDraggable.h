#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_UIDRAGGABLE_ADDOBSTACLE_OFFSET UNITYSDK_OFFSET(0xA68A720)
#define RPG_CLIENT_UIDRAGGABLE_AWAKE_OFFSET UNITYSDK_OFFSET(0xA689CB0)
#define RPG_CLIENT_UIDRAGGABLE_CLEAROBSTACLE_OFFSET UNITYSDK_OFFSET(0xA68A7B0)
#define RPG_CLIENT_UIDRAGGABLE_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xA689D70)
#define RPG_CLIENT_UIDRAGGABLE_ONDRAG_OFFSET UNITYSDK_OFFSET(0xA68A020)
#define RPG_CLIENT_UIDRAGGABLE_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xA68A420)
#define RPG_CLIENT_UIDRAGGABLE_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xA68A4A0)
#define RPG_CLIENT_UIDRAGGABLE_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xA68A520)
#define RPG_CLIENT_UIDRAGGABLE_SETBEGINDRAGCALLBACK_OFFSET UNITYSDK_OFFSET(0xA68A5A0)
#define RPG_CLIENT_UIDRAGGABLE_SETENDDRAGCALLBACK_OFFSET UNITYSDK_OFFSET(0xA68A600)
#define RPG_CLIENT_UIDRAGGABLE_SETPOINTERDOWNCALLBACK_OFFSET UNITYSDK_OFFSET(0xA68A660)
#define RPG_CLIENT_UIDRAGGABLE_SETPOINTERUPCALLBACK_OFFSET UNITYSDK_OFFSET(0xA68A6C0)
#define RPG_CLIENT_UIDRAGGABLE_SIMULATEDRAG_OFFSET UNITYSDK_OFFSET(0xA68A820)
#define RPG_CLIENT_UIDRAGGABLE__CTOR_OFFSET UNITYSDK_OFFSET(0xA68AD90)
#define RPG_CLIENT_UIDRAGGABLE__ISINOBSTACLERECTS_OFFSET UNITYSDK_OFFSET(0xA68AB20)
#define RPG_CLIENT_UIDRAGGABLE__TRYSETPOSITION_OFFSET UNITYSDK_OFFSET(0xA68A200)
#define RPG_CLIENT_UIDRAGGABLE__UPDATELIMITATION_OFFSET UNITYSDK_OFFSET(0xA689F70)

namespace RPG::Client
{
	inline static constexpr unsigned int UIDraggable_TypeDefinitionIndex = 56443;

	class UIDraggable : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean IsLimitedInContainer; // 0x18
		::System::Boolean UseMouseLeftOnly; // 0x19
		::UnityEngine::RectTransform* _Root; // 0x20
		::UnityEngine::Vector2 _BeginRootLocalPosition; // 0x28
		::UnityEngine::Vector2 _BeginDragLocalPosition; // 0x30
		::UnityEngine::Vector2 _MinPosition; // 0x38
		::UnityEngine::Vector2 _MaxPosition; // 0x40
		::System::Single _ContainerOffset; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* _ObstacleRects; // 0x50
		::System::Action_1<::System::Object*>* _BeginDragCallback; // 0x58
		::System::Object* _BeginDragCallbackParam; // 0x60
		::System::Action_1<::System::Object*>* _EndDragCallback; // 0x68
		::System::Object* _EndDragCallbackParam; // 0x70
		::System::Action_1<::System::Object*>* _PointerDownCallback; // 0x78
		::System::Object* _PointerDownCallbackParam; // 0x80
		::System::Action_1<::System::Object*>* _PointerUpCallback; // 0x88
		::System::Object* _PointerUpCallbackParam; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLE_AWAKE_OFFSET))(this);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLE_ONBEGINDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLE_ONDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLE_ONENDDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLE_ONPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLE_ONPOINTERUP_OFFSET))(this, eventData);
		}

		::System::Void SetBeginDragCallback(::System::Action_1<::System::Object*>* luaCallback, ::System::Object* luaCallbackParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLE_SETBEGINDRAGCALLBACK_OFFSET))(this, luaCallback, luaCallbackParam);
		}

		::System::Void SetEndDragCallback(::System::Action_1<::System::Object*>* luaCallback, ::System::Object* luaCallbackParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLE_SETENDDRAGCALLBACK_OFFSET))(this, luaCallback, luaCallbackParam);
		}

		::System::Void SetPointerDownCallback(::System::Action_1<::System::Object*>* luaCallback, ::System::Object* luaCallbackParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLE_SETPOINTERDOWNCALLBACK_OFFSET))(this, luaCallback, luaCallbackParam);
		}

		::System::Void SetPointerUpCallback(::System::Action_1<::System::Object*>* luaCallback, ::System::Object* luaCallbackParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLE_SETPOINTERUPCALLBACK_OFFSET))(this, luaCallback, luaCallbackParam);
		}

		::System::Void AddObstacle(::UnityEngine::RectTransform* rectTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLE_ADDOBSTACLE_OFFSET))(this, rectTransform);
		}

		::System::Void ClearObstacle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLE_CLEAROBSTACLE_OFFSET))(this);
		}

		::System::Void SimulateDrag(::UnityEngine::Vector2 endScreenPosition, ::UnityEngine::Vector2 beginScreenPosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLE_SIMULATEDRAG_OFFSET))(this, endScreenPosition, beginScreenPosition);
		}

		::System::Boolean _IsInObstacleRects(::UnityEngine::Vector2 screenPosition)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLE__ISINOBSTACLERECTS_OFFSET))(this, screenPosition);
		}

		::System::Void _UpdateLimitation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLE__UPDATELIMITATION_OFFSET))(this);
		}

		::System::Boolean _TrySetPosition(::UnityEngine::Vector2 pos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLE__TRYSETPOSITION_OFFSET))(this, pos);
		}
	};
}
