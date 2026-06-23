#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/RouterEventNode_1.h"
#include "unitysdk/ParadoxNotion/EventData.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace FlowCanvas { class FlowOutput; }
namespace ParadoxNotion::Services { class EventRouter; }
namespace UnityEngine { class Collider; }

#define FLOWCANVAS_NODES_MOUSEAGENTEVENTS_ONMOUSEDOWN_OFFSET UNITYSDK_OFFSET(0x1BCB5710)
#define FLOWCANVAS_NODES_MOUSEAGENTEVENTS_ONMOUSEDRAG_OFFSET UNITYSDK_OFFSET(0x1BCB5830)
#define FLOWCANVAS_NODES_MOUSEAGENTEVENTS_ONMOUSEENTER_OFFSET UNITYSDK_OFFSET(0x1BCB5360)
#define FLOWCANVAS_NODES_MOUSEAGENTEVENTS_ONMOUSEEXIT_OFFSET UNITYSDK_OFFSET(0x1BCB5680)
#define FLOWCANVAS_NODES_MOUSEAGENTEVENTS_ONMOUSEOVER_OFFSET UNITYSDK_OFFSET(0x1BCB55F0)
#define FLOWCANVAS_NODES_MOUSEAGENTEVENTS_ONMOUSEUP_OFFSET UNITYSDK_OFFSET(0x1BCB57A0)
#define FLOWCANVAS_NODES_MOUSEAGENTEVENTS_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1BCB4A30)
#define FLOWCANVAS_NODES_MOUSEAGENTEVENTS_STOREHIT_OFFSET UNITYSDK_OFFSET(0x1BCB53F0)
#define FLOWCANVAS_NODES_MOUSEAGENTEVENTS_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1BCB4BA0)
#define FLOWCANVAS_NODES_MOUSEAGENTEVENTS_UNSUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x1BCB4F80)
#define FLOWCANVAS_NODES_MOUSEAGENTEVENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCB58C0)
#define FLOWCANVAS_NODES_MOUSEAGENTEVENTS__REGISTERPORTS_B__8_0_OFFSET UNITYSDK_OFFSET(0x1BCB5910)
#define FLOWCANVAS_NODES_MOUSEAGENTEVENTS__REGISTERPORTS_B__8_1_OFFSET UNITYSDK_OFFSET(0x1BCB5920)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int MouseAgentEvents_TypeDefinitionIndex = 29730;

	class MouseAgentEvents : public ::FlowCanvas::Nodes::RouterEventNode_1<::UnityEngine::Collider*>
	{
	public:
		::FlowCanvas::FlowOutput* onOver; // 0xC0
		::FlowCanvas::FlowOutput* onExit; // 0xC8
		::FlowCanvas::FlowOutput* onDown; // 0xD0
		::FlowCanvas::FlowOutput* onEnter; // 0xD8
		::UnityEngine::Collider* receiver; // 0xE0
		::FlowCanvas::FlowOutput* onDrag; // 0xE8
		::FlowCanvas::FlowOutput* onUp; // 0xF0
		::UnityEngine::RaycastHit hit; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEAGENTEVENTS__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEAGENTEVENTS_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Subscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEAGENTEVENTS_SUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void UnSubscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEAGENTEVENTS_UNSUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void OnMouseEnter(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEAGENTEVENTS_ONMOUSEENTER_OFFSET))(this, msg);
		}

		::System::Void OnMouseOver(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEAGENTEVENTS_ONMOUSEOVER_OFFSET))(this, msg);
		}

		::System::Void OnMouseExit(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEAGENTEVENTS_ONMOUSEEXIT_OFFSET))(this, msg);
		}

		::System::Void OnMouseDown(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEAGENTEVENTS_ONMOUSEDOWN_OFFSET))(this, msg);
		}

		::System::Void OnMouseUp(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEAGENTEVENTS_ONMOUSEUP_OFFSET))(this, msg);
		}

		::System::Void OnMouseDrag(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEAGENTEVENTS_ONMOUSEDRAG_OFFSET))(this, msg);
		}

		::System::Void StoreHit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEAGENTEVENTS_STOREHIT_OFFSET))(this);
		}

		::UnityEngine::Collider* _RegisterPorts_b__8_0()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEAGENTEVENTS__REGISTERPORTS_B__8_0_OFFSET))(this);
		}

		::UnityEngine::RaycastHit _RegisterPorts_b__8_1()
		{
			return ((::UnityEngine::RaycastHit(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_MOUSEAGENTEVENTS__REGISTERPORTS_B__8_1_OFFSET))(this);
		}
	};
}
