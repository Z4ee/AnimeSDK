#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/FlowNode.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EntityDieCheckType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/MonsterPickType.h"

class Class_1_B7E341C5F1A6F199;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::FlowCanvas::Nodes { class EntitySaveDataMap; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE_BINDEVENT_OFFSET UNITYSDK_OFFSET(0x15412DF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE_CHECKDIECOUNT_OFFSET UNITYSDK_OFFSET(0x154129A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE_CHECKFINISH_OFFSET UNITYSDK_OFFSET(0x154146D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE_CHECKMONSTERDIETYPE_OFFSET UNITYSDK_OFFSET(0x15413EA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE_COMPAREMONSTERCAMP_OFFSET UNITYSDK_OFFSET(0x15414940)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE_FINDINMONSTERMAP_OFFSET UNITYSDK_OFFSET(0x15413C90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x15412400)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE_ISMATCHMONSTER_OFFSET UNITYSDK_OFFSET(0x15413A70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x15413130)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x15412DA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x15413080)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE_ONLATETICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x154130D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE_ONMONSTERDIE_OFFSET UNITYSDK_OFFSET(0x15413240)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x15411E90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE_STOP_OFFSET UNITYSDK_OFFSET(0x154120E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE_UNBINDEVENT_OFFSET UNITYSDK_OFFSET(0x15412170)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE__CALLREACHFLOW_OFFSET UNITYSDK_OFFSET(0x154148D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x15414B50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE__REGISTERPORTS_B__14_0_OFFSET UNITYSDK_OFFSET(0x15414B90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE__REGISTERPORTS_B__14_1_OFFSET UNITYSDK_OFFSET(0x15414CF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x15414DA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x15414DB0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMonsterDieCountNode_TypeDefinitionIndex = 69402;

	class LDMonsterDieCountNode : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::EntitySaveDataMap*>* inputEntityMap; // 0xA8
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::MonsterPickType>* monsterCampInput; // 0xB0
		::FlowCanvas::FlowOutput* raised; // 0xB8
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::EntityDieCheckType>* inputDeathCheckType; // 0xC0
		::System::Collections::Generic::HashSet_1<::System::UInt32>* dieMonsterSet; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Int32>* inputNumber; // 0xD0
		::FlowCanvas::ValueInput_1<::System::Boolean>* allMonsterInput; // 0xD8
		::FlowCanvas::ValueInput_1<::System::Int32>* triggerCountInput; // 0xE0
		::FlowCanvas::FlowOutput* Reached; // 0xE8
		::System::Boolean nodeEnter; // 0xF0
		::System::Boolean bindEvent; // 0xF1
		::System::Boolean goalReached; // 0xF2
		::System::Int32 currentDieCount; // 0xF4
		::System::Int32 alreadyTriggerCount; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Stop(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE_STOP_OFFSET))(this, f);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE_INVOKE_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void BindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE_BINDEVENT_OFFSET))(this);
		}

		::System::Void UnBindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE_UNBINDEVENT_OFFSET))(this);
		}

		::System::Void OnLateTickCallback(::System::Single delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE_ONLATETICKCALLBACK_OFFSET))(this, delta);
		}

		::System::Void OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void OnMonsterDie(::System::UInt32 fighterID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE_ONMONSTERDIE_OFFSET))(this, fighterID);
		}

		::System::Void _CallReachFlow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE__CALLREACHFLOW_OFFSET))(this);
		}

		::System::Boolean CheckFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE_CHECKFINISH_OFFSET))(this);
		}

		::System::Boolean IsMatchMonster(::System::UInt32 entityId, ::MoleMole::Battle::Entity* self)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE_ISMATCHMONSTER_OFFSET))(this, entityId, self);
		}

		::System::Boolean FindInMonsterMap(::System::UInt32 entityId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE_FINDINMONSTERMAP_OFFSET))(this, entityId);
		}

		::System::Int32 CheckDieCount(::System::UInt32 deathEntityId)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE_CHECKDIECOUNT_OFFSET))(this, deathEntityId);
		}

		::System::Boolean CheckMonsterDieType(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE_CHECKMONSTERDIETYPE_OFFSET))(this, entity);
		}

		::System::Boolean CompareMonsterCamp(::MoleMole::Battle::Entity* self, ::MoleMole::Battle::Entity* monster)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE_COMPAREMONSTERCAMP_OFFSET))(this, self, monster);
		}

		::System::Void _RegisterPorts_b__14_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE__REGISTERPORTS_B__14_0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__14_1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE__REGISTERPORTS_B__14_1_OFFSET))(this, f);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECOUNTNODE___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
