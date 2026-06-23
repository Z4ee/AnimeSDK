#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/FlowNode.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EntityDieCheckType.h"

class Class_1_B7E341C5F1A6F199;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::FlowCanvas::Nodes { class EntitySaveDataMap; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_BINDEVENT_OFFSET UNITYSDK_OFFSET(0x1A39A440)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_CHECKDIECOUNT_OFFSET UNITYSDK_OFFSET(0x1A399810)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A399340)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x1A39A650)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1A39A3F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1A39A600)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_ONMONSTERDIE_OFFSET UNITYSDK_OFFSET(0x1A39A750)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1A3991B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_UNBINDEVENT_OFFSET UNITYSDK_OFFSET(0x1A39A240)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A39AC60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE__REGISTERPORTS_B__9_0_OFFSET UNITYSDK_OFFSET(0x1A39ACA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1A39AD50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1A39AD60)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDMonsterDieCheckNode_TypeDefinitionIndex = 56954;

	class LDMonsterDieCheckNode : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::ValueInput_1<::System::Boolean>* inputAllDie; // 0xA8
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::EntityDieCheckType>* inputDeathCheckType; // 0xB0
		::FlowCanvas::ValueInput_1<::MoleMole::FlowCanvas::Nodes::EntitySaveDataMap*>* inputEntityMap; // 0xB8
		::FlowCanvas::FlowOutput* raised; // 0xC0
		::FlowCanvas::FlowOutput* Reached; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Int32>* inputNumber; // 0xD0
		::System::Boolean bindEvent; // 0xD8
		::System::Boolean nodeEnter; // 0xD9
		::System::Boolean goalReached; // 0xDA

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_INVOKE_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void BindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_BINDEVENT_OFFSET))(this);
		}

		::System::Void UnBindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_UNBINDEVENT_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void OnMonsterDie(::System::UInt32 fighterID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_ONMONSTERDIE_OFFSET))(this, fighterID);
		}

		::System::Int32 CheckDieCount(::System::UInt32 deathEntityId)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE_CHECKDIECOUNT_OFFSET))(this, deathEntityId);
		}

		::System::Void _RegisterPorts_b__9_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE__REGISTERPORTS_B__9_0_OFFSET))(this, f);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDMONSTERDIECHECKNODE___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
