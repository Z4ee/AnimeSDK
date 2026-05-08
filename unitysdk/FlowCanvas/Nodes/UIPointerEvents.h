#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/RouterEventNode_1.h"
#include "unitysdk/ParadoxNotion/EventData_1.h"

namespace FlowCanvas { class FlowOutput; }
namespace ParadoxNotion::Services { class EventRouter; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define FLOWCANVAS_NODES_UIPOINTEREVENTS_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1984A350)
#define FLOWCANVAS_NODES_UIPOINTEREVENTS_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x1984A030)
#define FLOWCANVAS_NODES_UIPOINTEREVENTS_ONPOINTERDRAG_OFFSET UNITYSDK_OFFSET(0x1984A3F0)
#define FLOWCANVAS_NODES_UIPOINTEREVENTS_ONPOINTERDROP_OFFSET UNITYSDK_OFFSET(0x1984A490)
#define FLOWCANVAS_NODES_UIPOINTEREVENTS_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0x1984A210)
#define FLOWCANVAS_NODES_UIPOINTEREVENTS_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0x1984A2B0)
#define FLOWCANVAS_NODES_UIPOINTEREVENTS_ONPOINTERSCROLL_OFFSET UNITYSDK_OFFSET(0x1984A530)
#define FLOWCANVAS_NODES_UIPOINTEREVENTS_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1984A170)
#define FLOWCANVAS_NODES_UIPOINTEREVENTS_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x19849560)
#define FLOWCANVAS_NODES_UIPOINTEREVENTS_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x19849730)
#define FLOWCANVAS_NODES_UIPOINTEREVENTS_UNSUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x19849BB0)
#define FLOWCANVAS_NODES_UIPOINTEREVENTS_UPDATEPRESSED_OFFSET UNITYSDK_OFFSET(0x1984A120)
#define FLOWCANVAS_NODES_UIPOINTEREVENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1984A5D0)
#define FLOWCANVAS_NODES_UIPOINTEREVENTS__REGISTERPORTS_B__12_0_OFFSET UNITYSDK_OFFSET(0x1984A620)
#define FLOWCANVAS_NODES_UIPOINTEREVENTS__REGISTERPORTS_B__12_1_OFFSET UNITYSDK_OFFSET(0x1984A630)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int UIPointerEvents_TypeDefinitionIndex = 26578;

	class UIPointerEvents : public ::FlowCanvas::Nodes::RouterEventNode_1<::UnityEngine::Transform*>
	{
	public:
		::FlowCanvas::FlowOutput* onPointerScroll; // 0xC0
		::FlowCanvas::FlowOutput* onPointerExit; // 0xC8
		::UnityEngine::EventSystems::PointerEventData* eventData; // 0xD0
		::FlowCanvas::FlowOutput* onPointerDown; // 0xD8
		::FlowCanvas::FlowOutput* onPointerUp; // 0xE0
		::FlowCanvas::FlowOutput* onPointerDrop; // 0xE8
		::FlowCanvas::FlowOutput* onPointerClick; // 0xF0
		::FlowCanvas::FlowOutput* onPointerEnter; // 0xF8
		::FlowCanvas::FlowOutput* onPointerDrag; // 0x100
		::FlowCanvas::FlowOutput* onPointerPressed; // 0x108
		::UnityEngine::GameObject* receiver; // 0x110
		::System::Boolean updatePressed; // 0x118

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIPOINTEREVENTS__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIPOINTEREVENTS_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Subscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIPOINTEREVENTS_SUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void UnSubscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIPOINTEREVENTS_UNSUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void OnPointerDown(::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::PointerEventData*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::PointerEventData*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIPOINTEREVENTS_ONPOINTERDOWN_OFFSET))(this, msg);
		}

		::System::Void OnPointerUp(::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::PointerEventData*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::PointerEventData*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIPOINTEREVENTS_ONPOINTERUP_OFFSET))(this, msg);
		}

		::System::Collections::IEnumerator* UpdatePressed()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIPOINTEREVENTS_UPDATEPRESSED_OFFSET))(this);
		}

		::System::Void OnPointerEnter(::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::PointerEventData*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::PointerEventData*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIPOINTEREVENTS_ONPOINTERENTER_OFFSET))(this, msg);
		}

		::System::Void OnPointerExit(::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::PointerEventData*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::PointerEventData*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIPOINTEREVENTS_ONPOINTEREXIT_OFFSET))(this, msg);
		}

		::System::Void OnPointerClick(::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::PointerEventData*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::PointerEventData*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIPOINTEREVENTS_ONPOINTERCLICK_OFFSET))(this, msg);
		}

		::System::Void OnPointerDrag(::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::PointerEventData*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::PointerEventData*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIPOINTEREVENTS_ONPOINTERDRAG_OFFSET))(this, msg);
		}

		::System::Void OnPointerDrop(::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::PointerEventData*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::PointerEventData*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIPOINTEREVENTS_ONPOINTERDROP_OFFSET))(this, msg);
		}

		::System::Void OnPointerScroll(::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::PointerEventData*> msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData_1<::UnityEngine::EventSystems::PointerEventData*>))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIPOINTEREVENTS_ONPOINTERSCROLL_OFFSET))(this, msg);
		}

		::UnityEngine::GameObject* _RegisterPorts_b__12_0()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIPOINTEREVENTS__REGISTERPORTS_B__12_0_OFFSET))(this);
		}

		::UnityEngine::EventSystems::PointerEventData* _RegisterPorts_b__12_1()
		{
			return ((::UnityEngine::EventSystems::PointerEventData*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_UIPOINTEREVENTS__REGISTERPORTS_B__12_1_OFFSET))(this);
		}
	};
}
