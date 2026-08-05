#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

class Class_1_B7E341C5F1A6F199;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_ADDLISTENHPABILITY_OFFSET UNITYSDK_OFFSET(0x1B836DA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_BINDEVENT_OFFSET UNITYSDK_OFFSET(0x1B836F10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_ENTITYONREADY_OFFSET UNITYSDK_OFFSET(0x1B836C80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_ONEVENT_OFFSET UNITYSDK_OFFSET(0x1B837CA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1B837310)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1B837370)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_ONHOSTCHANGED_OFFSET UNITYSDK_OFFSET(0x1B836D30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_ONPROPVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x1B8373E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1B8364C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_START_OFFSET UNITYSDK_OFFSET(0x1B836660)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_UNBINDEVENT_OFFSET UNITYSDK_OFFSET(0x1B837110)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_WAITAUTHORITYNOTIFYCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1B836C00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B837FF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE__REGISTERPORTS_B__9_0_OFFSET UNITYSDK_OFFSET(0x1B838030)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1B838080)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1B838090)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDListenMonsterHpChangeNode_TypeDefinitionIndex = 40314;

	class LDListenMonsterHpChangeNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* outPut; // 0xA8
		::FlowCanvas::FlowOutput* onHighToValueOutPut; // 0xB0
		::FlowCanvas::ValueInput_1<::System::Single>* lowToValuePercentInput; // 0xB8
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* entityInput; // 0xC0
		::UnityEngine::Coroutine* coroutine; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Single>* highToValuePercnetInput; // 0xD0
		::FlowCanvas::FlowOutput* onLowToValueOutPut; // 0xD8
		::System::Boolean bindEvent; // 0xE0
		::System::Boolean isStart; // 0xE1

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_START_OFFSET))(this);
		}

		::System::Void OnHostChanged(::System::UInt32 hostPeerID, ::System::Boolean isNewHost)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_ONHOSTCHANGED_OFFSET))(this, hostPeerID, isNewHost);
		}

		::System::Void EntityOnReady(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_ENTITYONREADY_OFFSET))(this, entity);
		}

		::System::Void BindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_BINDEVENT_OFFSET))(this);
		}

		::System::Void AddListenHpAbility(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_ADDLISTENHPABILITY_OFFSET))(this, entity);
		}

		::System::Void UnBindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_UNBINDEVENT_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Collections::IEnumerator* WaitAuthorityNotifyCoroutine()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_WAITAUTHORITYNOTIFYCOROUTINE_OFFSET))(this);
		}

		::System::Void OnPropValueChange(::MoleMole::Battle::Entity* monster, ::System::Double oldValue, ::System::Double newValue, ::System::Double max)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_ONPROPVALUECHANGE_OFFSET))(this, monster, oldValue, newValue, max);
		}

		::System::Void OnEvent(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_ONEVENT_OFFSET))(this, evt);
		}

		::System::Void _RegisterPorts_b__9_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE__REGISTERPORTS_B__9_0_OFFSET))(this, f);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
