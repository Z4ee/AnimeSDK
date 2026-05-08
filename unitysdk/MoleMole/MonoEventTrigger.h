#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/EventTriggerType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class AxisEventData; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class EventTrigger_Entry; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_MONOEVENTTRIGGER_ADDTRIGGER_OFFSET UNITYSDK_OFFSET(0x10BCFAA0)
#define MOLEMOLE_MONOEVENTTRIGGER_CLEARTRIGGERS_OFFSET UNITYSDK_OFFSET(0x10BCFC60)
#define MOLEMOLE_MONOEVENTTRIGGER_CLEAR_OFFSET UNITYSDK_OFFSET(0x10BCF960)
#define MOLEMOLE_MONOEVENTTRIGGER_GET_ISDRAGGING_OFFSET UNITYSDK_OFFSET(0x10BD2190)
#define MOLEMOLE_MONOEVENTTRIGGER_METHOD_5_E92A4A6790C96646_OFFSET UNITYSDK_OFFSET(0x10BCFF20)
#define MOLEMOLE_MONOEVENTTRIGGER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x10BD1930)
#define MOLEMOLE_MONOEVENTTRIGGER_ONCANCEL_OFFSET UNITYSDK_OFFSET(0x10BD1F80)
#define MOLEMOLE_MONOEVENTTRIGGER_ONDESELECT_OFFSET UNITYSDK_OFFSET(0x10BD0EE0)
#define MOLEMOLE_MONOEVENTTRIGGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x10BCF8F0)
#define MOLEMOLE_MONOEVENTTRIGGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x10BCF8A0)
#define MOLEMOLE_MONOEVENTTRIGGER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x10BD0220)
#define MOLEMOLE_MONOEVENTTRIGGER_ONDROP_OFFSET UNITYSDK_OFFSET(0x10BD0430)
#define MOLEMOLE_MONOEVENTTRIGGER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x10BD1B50)
#define MOLEMOLE_MONOEVENTTRIGGER_ONINITIALIZEPOTENTIALDRAG_OFFSET UNITYSDK_OFFSET(0x10BD1720)
#define MOLEMOLE_MONOEVENTTRIGGER_ONMOVE_OFFSET UNITYSDK_OFFSET(0x10BD1300)
#define MOLEMOLE_MONOEVENTTRIGGER_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x10BD0AA0)
#define MOLEMOLE_MONOEVENTTRIGGER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x10BD0640)
#define MOLEMOLE_MONOEVENTTRIGGER_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x10BCFD10)
#define MOLEMOLE_MONOEVENTTRIGGER_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x10BD0010)
#define MOLEMOLE_MONOEVENTTRIGGER_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x10BD0870)
#define MOLEMOLE_MONOEVENTTRIGGER_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x10BD10F0)
#define MOLEMOLE_MONOEVENTTRIGGER_ONSELECT_OFFSET UNITYSDK_OFFSET(0x10BD0CD0)
#define MOLEMOLE_MONOEVENTTRIGGER_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x10BD1D70)
#define MOLEMOLE_MONOEVENTTRIGGER_ONUPDATESELECTED_OFFSET UNITYSDK_OFFSET(0x10BD1510)
#define MOLEMOLE_MONOEVENTTRIGGER_REMOVETRIGGER_OFFSET UNITYSDK_OFFSET(0x10BCFB60)
#define MOLEMOLE_MONOEVENTTRIGGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x10BCF9B0)
#define MOLEMOLE_MONOEVENTTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x10BD21A0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEventTrigger_TypeDefinitionIndex = 76826;

	class MonoEventTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::EventSystems::EventTrigger_Entry*>* triggers; // 0x18
		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* OnPointerClickListener; // 0x20
		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* OnPointerDownListener; // 0x28
		::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>* OnPointerUpListener; // 0x30
		::System::Action_1<::System::Single>* OnLongPressListener; // 0x38
		::UnityEngine::GameObject* target; // 0x40
		::System::Boolean Field_5_6; // 0x48
		::System::Single Field_5_7; // 0x4C
		::System::Single Field_5_8; // 0x50
		::System::Boolean Field_5_9; // 0x54
		::System::Single Field_5_10; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_CLEAR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_UPDATE_OFFSET))(this);
		}

		::System::Void AddTrigger(::UnityEngine::EventSystems::EventTrigger_Entry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::EventTrigger_Entry*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_ADDTRIGGER_OFFSET))(this, a1);
		}

		::System::Void RemoveTrigger(::UnityEngine::EventSystems::EventTriggerType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::EventTriggerType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_REMOVETRIGGER_OFFSET))(this, a1);
		}

		::System::Void ClearTriggers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_CLEARTRIGGERS_OFFSET))(this);
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_ONPOINTERENTER_OFFSET))(this, a1);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_ONPOINTEREXIT_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void OnDrop(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_ONDROP_OFFSET))(this, a1);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_ONPOINTERUP_OFFSET))(this, a1);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_ONPOINTERCLICK_OFFSET))(this, a1);
		}

		::System::Void OnSelect(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_ONSELECT_OFFSET))(this, a1);
		}

		::System::Void OnDeselect(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_ONDESELECT_OFFSET))(this, a1);
		}

		::System::Void OnScroll(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_ONSCROLL_OFFSET))(this, a1);
		}

		::System::Void OnMove(::UnityEngine::EventSystems::AxisEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::AxisEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_ONMOVE_OFFSET))(this, a1);
		}

		::System::Void OnUpdateSelected(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_ONUPDATESELECTED_OFFSET))(this, a1);
		}

		::System::Void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_ONINITIALIZEPOTENTIALDRAG_OFFSET))(this, a1);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_ONBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_ONENDDRAG_OFFSET))(this, a1);
		}

		::System::Void OnSubmit(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_ONSUBMIT_OFFSET))(this, a1);
		}

		::System::Void OnCancel(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_ONCANCEL_OFFSET))(this, a1);
		}

		::System::Boolean get_isDragging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_GET_ISDRAGGING_OFFSET))(this);
		}

		::System::Void Method_5_E92A4A6790C96646(::UnityEngine::EventSystems::EventTriggerType a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::EventTriggerType, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEVENTTRIGGER_METHOD_5_E92A4A6790C96646_OFFSET))(this, a1, a2);
		}
	};
}
