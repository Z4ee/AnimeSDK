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

#define NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1D397C60)
#define NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1D398FF0)
#define NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONDESELECT_OFFSET UNITYSDK_OFFSET(0x1D3998C0)
#define NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D3986A0)
#define NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONDRAG_OFFSET UNITYSDK_OFFSET(0x1D399460)
#define NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONDROP_OFFSET UNITYSDK_OFFSET(0x1D399540)
#define NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D397D50)
#define NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONMOVE_OFFSET UNITYSDK_OFFSET(0x1D3999A0)
#define NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1D399380)
#define NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1D3991C0)
#define NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x1D399000)
#define NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x1D3990E0)
#define NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1D3992A0)
#define NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x1D399620)
#define NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONSELECT_OFFSET UNITYSDK_OFFSET(0x1D3997E0)
#define NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0x1D399A80)
#define NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT_ONUPDATESELECTED_OFFSET UNITYSDK_OFFSET(0x1D399700)
#define NODECANVAS_TASKS_CONDITIONS_INTERCEPTEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D399B60)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int InterceptEvent_TypeDefinitionIndex = 30503;

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
