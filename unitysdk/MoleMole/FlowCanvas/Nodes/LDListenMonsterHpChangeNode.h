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

#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_ADDLISTENHPABILITY_OFFSET UNITYSDK_OFFSET(0x1820CF00)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_BINDEVENT_OFFSET UNITYSDK_OFFSET(0x1820D070)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_ENTITYONREADY_OFFSET UNITYSDK_OFFSET(0x1820CDE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_ONEVENT_OFFSET UNITYSDK_OFFSET(0x1820DE20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1820D480)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1820D4E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_ONHOSTCHANGED_OFFSET UNITYSDK_OFFSET(0x1820CE90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_ONPROPVALUECHANGE_OFFSET UNITYSDK_OFFSET(0x1820D550)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1820C580)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_START_OFFSET UNITYSDK_OFFSET(0x1820C720)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_UNBINDEVENT_OFFSET UNITYSDK_OFFSET(0x1820D270)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE_WAITAUTHORITYNOTIFYCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1820CD60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1820E180)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE__REGISTERPORTS_B__9_0_OFFSET UNITYSDK_OFFSET(0x1820E1C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1820E210)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENMONSTERHPCHANGENODE___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1820E220)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDListenMonsterHpChangeNode_TypeDefinitionIndex = 48240;

	class LDListenMonsterHpChangeNode : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::UnityEngine::Coroutine* coroutine; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Single>* lowToValuePercentInput; // 0xB0
		::FlowCanvas::FlowOutput* outPut; // 0xB8
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* entityInput; // 0xC0
		::FlowCanvas::FlowOutput* onHighToValueOutPut; // 0xC8
		::FlowCanvas::FlowOutput* onLowToValueOutPut; // 0xD0
		::FlowCanvas::ValueInput_1<::System::Single>* highToValuePercnetInput; // 0xD8
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
