#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask_1.h"
#include "unitysdk/ParadoxNotion/EventData_1.h"
#include "unitysdk/UnityEngine/EventSystems/EventTriggerType.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class AxisEventData; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1A904E50)
#define NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1A9061C0)
#define NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONDESELECT_OFFSET UNITYSDK_OFFSET(0x1A906A90)
#define NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A905880)
#define NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1A906630)
#define NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONDROP_OFFSET UNITYSDK_OFFSET(0x1A906710)
#define NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A904F40)
#define NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONMOVE_OFFSET UNITYSDK_OFFSET(0x1A906B70)
#define NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1A906550)
#define NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1A906390)
#define NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x1A9061D0)
#define NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x1A9062B0)
#define NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1A906470)
#define NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x1A9067F0)
#define NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONSELECT_OFFSET UNITYSDK_OFFSET(0x1A9069B0)
#define NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x1A906C50)
#define NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONUPDATESELECTED_OFFSET UNITYSDK_OFFSET(0x1A9068D0)
#define NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A906D30)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int InterceptEvent_TypeDefinitionIndex = 26598;

	class InterceptEvent : public ::NodeCanvas::Framework::ConditionTask_1<::UnityEngine::Transform*>
	{
	public:
		::UnityEngine::EventSystems::EventTriggerType eventType; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_GET_INFO_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONDISABLE_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONCHECK_OFFSET))(this);
		}

		::System::Void OnPointerEnter(::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::PointerEventData*> data)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::PointerEventData*>))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONPOINTERENTER_OFFSET))(this, data);
		}

		::System::Void OnPointerExit(::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::PointerEventData*> data)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::PointerEventData*>))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONPOINTEREXIT_OFFSET))(this, data);
		}

		::System::Void OnPointerDown(::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::PointerEventData*> data)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::PointerEventData*>))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONPOINTERDOWN_OFFSET))(this, data);
		}

		::System::Void OnPointerUp(::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::PointerEventData*> data)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::PointerEventData*>))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONPOINTERUP_OFFSET))(this, data);
		}

		::System::Void OnPointerClick(::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::PointerEventData*> data)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::PointerEventData*>))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONPOINTERCLICK_OFFSET))(this, data);
		}

		::System::Void OnDrag(::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::PointerEventData*> data)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::PointerEventData*>))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONDRAG_OFFSET))(this, data);
		}

		::System::Void OnDrop(::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::PointerEventData*> eventData)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::PointerEventData*>))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONDROP_OFFSET))(this, eventData);
		}

		::System::Void OnScroll(::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::PointerEventData*> data)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::PointerEventData*>))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONSCROLL_OFFSET))(this, data);
		}

		::System::Void OnUpdateSelected(::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::BaseEventData*> eventData)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::BaseEventData*>))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONUPDATESELECTED_OFFSET))(this, eventData);
		}

		::System::Void OnSelect(::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::BaseEventData*> eventData)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::BaseEventData*>))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONSELECT_OFFSET))(this, eventData);
		}

		::System::Void OnDeselect(::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::BaseEventData*> eventData)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::BaseEventData*>))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONDESELECT_OFFSET))(this, eventData);
		}

		::System::Void OnMove(::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::AxisEventData*> eventData)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::AxisEventData*>))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONMOVE_OFFSET))(this, eventData);
		}

		::System::Void OnSubmit(::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::BaseEventData*> eventData)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::BaseEventData*>))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONSUBMIT_OFFSET))(this, eventData);
		}
	};
}
