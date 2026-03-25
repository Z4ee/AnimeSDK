#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_UIROTATABLE_AWAKE_OFFSET UNITYSDK_OFFSET(0xA72B740)
#define RPG_CLIENT_UIROTATABLE_ONDRAG_OFFSET UNITYSDK_OFFSET(0xA72BE20)
#define RPG_CLIENT_UIROTATABLE_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xA72B800)
#define RPG_CLIENT_UIROTATABLE_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xA72C2B0)
#define RPG_CLIENT_UIROTATABLE_SETPOINTERDOWNCALLBACK_OFFSET UNITYSDK_OFFSET(0xA72C330)
#define RPG_CLIENT_UIROTATABLE_SETPOINTERUPCALLBACK_OFFSET UNITYSDK_OFFSET(0xA72C390)
#define RPG_CLIENT_UIROTATABLE_SIMULATEROTATE_OFFSET UNITYSDK_OFFSET(0xA72C3F0)
#define RPG_CLIENT_UIROTATABLE__CTOR_OFFSET UNITYSDK_OFFSET(0xA72C7C0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIRotatable_TypeDefinitionIndex = 56471;

	class UIRotatable : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* _Root; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* _SyncReverseRotateTransforms; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _SyncReverseRotateBeginAngles; // 0x28
		::UnityEngine::Vector2 _BeginRelativePosition; // 0x30
		::UnityEngine::Vector3 _BeginLocalEulerAngle; // 0x38
		::System::Action_1<::System::Object*>* _PointerDownCallback; // 0x48
		::System::Object* _PointerDownCallbackParam; // 0x50
		::System::Action_1<::System::Object*>* _PointerUpCallback; // 0x58
		::System::Object* _PointerUpCallbackParam; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIROTATABLE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIROTATABLE_AWAKE_OFFSET))(this);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIROTATABLE_ONPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIROTATABLE_ONDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIROTATABLE_ONPOINTERUP_OFFSET))(this, eventData);
		}

		::System::Void SetPointerDownCallback(::System::Action_1<::System::Object*>* luaCallback, ::System::Object* luaCallbackParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIROTATABLE_SETPOINTERDOWNCALLBACK_OFFSET))(this, luaCallback, luaCallbackParam);
		}

		::System::Void SetPointerUpCallback(::System::Action_1<::System::Object*>* luaCallback, ::System::Object* luaCallbackParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIROTATABLE_SETPOINTERUPCALLBACK_OFFSET))(this, luaCallback, luaCallbackParam);
		}

		::System::Void SimulateRotate(::System::Single deltaAngle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIROTATABLE_SIMULATEROTATE_OFFSET))(this, deltaAngle);
		}
	};
}
