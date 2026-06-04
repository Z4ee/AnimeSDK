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

#define RPG_CLIENT_UIROTATABLE_AWAKE_OFFSET UNITYSDK_OFFSET(0xCB90200)
#define RPG_CLIENT_UIROTATABLE_ONDRAG_OFFSET UNITYSDK_OFFSET(0xCB90910)
#define RPG_CLIENT_UIROTATABLE_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xCB902C0)
#define RPG_CLIENT_UIROTATABLE_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xCB90DE0)
#define RPG_CLIENT_UIROTATABLE_SETPOINTERDOWNCALLBACK_OFFSET UNITYSDK_OFFSET(0xCB90E70)
#define RPG_CLIENT_UIROTATABLE_SETPOINTERUPCALLBACK_OFFSET UNITYSDK_OFFSET(0xCB90ED0)
#define RPG_CLIENT_UIROTATABLE_SIMULATEROTATE_OFFSET UNITYSDK_OFFSET(0xCB90F30)
#define RPG_CLIENT_UIROTATABLE__CTOR_OFFSET UNITYSDK_OFFSET(0xCB91320)

namespace RPG::Client
{
	inline static constexpr unsigned int UIRotatable_TypeDefinitionIndex = 64636;

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

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIROTATABLE_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIROTATABLE_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIROTATABLE_ONPOINTERUP_OFFSET))(this, a1);
		}

		::System::Void SetPointerDownCallback(::System::Action_1<::System::Object*>* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIROTATABLE_SETPOINTERDOWNCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void SetPointerUpCallback(::System::Action_1<::System::Object*>* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIROTATABLE_SETPOINTERUPCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void SimulateRotate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIROTATABLE_SIMULATEROTATE_OFFSET))(this, a1);
		}
	};
}
