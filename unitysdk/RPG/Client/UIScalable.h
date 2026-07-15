#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_UISCALABLE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1830A310)
#define RPG_CLIENT_UISCALABLE_GET_MAXSCALE_OFFSET UNITYSDK_OFFSET(0x1830AE50)
#define RPG_CLIENT_UISCALABLE_GET_MINSCALE_OFFSET UNITYSDK_OFFSET(0x1830AE70)
#define RPG_CLIENT_UISCALABLE_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1830A7C0)
#define RPG_CLIENT_UISCALABLE_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1830A400)
#define RPG_CLIENT_UISCALABLE_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1830AB80)
#define RPG_CLIENT_UISCALABLE_SETPOINTERDOWNCALLBACK_OFFSET UNITYSDK_OFFSET(0x1830AC00)
#define RPG_CLIENT_UISCALABLE_SETPOINTERUPCALLBACK_OFFSET UNITYSDK_OFFSET(0x1830AC60)
#define RPG_CLIENT_UISCALABLE_SET_MAXSCALE_OFFSET UNITYSDK_OFFSET(0x1830AE60)
#define RPG_CLIENT_UISCALABLE_SET_MINSCALE_OFFSET UNITYSDK_OFFSET(0x1830AE80)
#define RPG_CLIENT_UISCALABLE_SIMULATESCALE_OFFSET UNITYSDK_OFFSET(0x1830ACC0)
#define RPG_CLIENT_UISCALABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1830AE90)
#define RPG_CLIENT_UISCALABLE__INITBEGINDATA_OFFSET UNITYSDK_OFFSET(0x1830A690)
#define RPG_CLIENT_UISCALABLE__TRYSETSCALE_OFFSET UNITYSDK_OFFSET(0x1830AD40)

namespace RPG::Client
{
	inline static constexpr unsigned int UIScalable_TypeDefinitionIndex = 66038;

	class UIScalable : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* _Root; // 0x18
		::System::Boolean _UseSize; // 0x20
		::System::Single _MaxScale; // 0x24
		::System::Single _MinScale; // 0x28
		::System::Single _BeginDistance; // 0x2C
		::UnityEngine::Vector3 _BeginScale; // 0x30
		::UnityEngine::Vector2 _OriginSize; // 0x3C
		::UnityEngine::Vector2 _BeginSize; // 0x44
		::System::Action_1<::System::Object*>* _PointerDownCallback; // 0x50
		::System::Object* _PointerDownCallbackParam; // 0x58
		::System::Action_1<::System::Object*>* _PointerUpCallback; // 0x60
		::System::Object* _PointerUpCallbackParam; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISCALABLE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISCALABLE_AWAKE_OFFSET))(this);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISCALABLE_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISCALABLE_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISCALABLE_ONPOINTERUP_OFFSET))(this, a1);
		}

		::System::Void SetPointerDownCallback(::System::Action_1<::System::Object*>* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISCALABLE_SETPOINTERDOWNCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void SetPointerUpCallback(::System::Action_1<::System::Object*>* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISCALABLE_SETPOINTERUPCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void SimulateScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISCALABLE_SIMULATESCALE_OFFSET))(this, a1);
		}

		::System::Void _InitBeginData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISCALABLE__INITBEGINDATA_OFFSET))(this);
		}

		::System::Void _TrySetScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISCALABLE__TRYSETSCALE_OFFSET))(this, a1);
		}

		::System::Single get_MaxScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISCALABLE_GET_MAXSCALE_OFFSET))(this);
		}

		::System::Void set_MaxScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISCALABLE_SET_MAXSCALE_OFFSET))(this, a1);
		}

		::System::Single get_MinScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISCALABLE_GET_MINSCALE_OFFSET))(this);
		}

		::System::Void set_MinScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UISCALABLE_SET_MINSCALE_OFFSET))(this, a1);
		}
	};
}
