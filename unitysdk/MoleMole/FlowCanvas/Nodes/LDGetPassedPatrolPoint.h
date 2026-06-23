#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_BE11F4E848E95621;
namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETPASSEDPATROLPOINT_BINDEVENT_OFFSET UNITYSDK_OFFSET(0x1160BF10)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETPASSEDPATROLPOINT_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x1160C2D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETPASSEDPATROLPOINT_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1160C0C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETPASSEDPATROLPOINT_ONNODETASKFINISH_OFFSET UNITYSDK_OFFSET(0x1160C5C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETPASSEDPATROLPOINT_ONPASSWAYPOINT_OFFSET UNITYSDK_OFFSET(0x1160C520)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETPASSEDPATROLPOINT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1160BAB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETPASSEDPATROLPOINT_STARTLISTEN_OFFSET UNITYSDK_OFFSET(0x1160BC90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETPASSEDPATROLPOINT_UNBINDEVENT_OFFSET UNITYSDK_OFFSET(0x1160C120)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETPASSEDPATROLPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1160C620)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETPASSEDPATROLPOINT__REGISTERPORTS_B__11_0_OFFSET UNITYSDK_OFFSET(0x1160C680)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETPASSEDPATROLPOINT__REGISTERPORTS_B__11_1_OFFSET UNITYSDK_OFFSET(0x1160C690)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETPASSEDPATROLPOINT___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1160C6A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetPassedPatrolPoint_TypeDefinitionIndex = 84588;

	class LDGetPassedPatrolPoint : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowInput* inputPort; // 0xA8
		::FlowCanvas::FlowOutput* wayPointArrivePort; // 0xB0
		::System::String* currentWayPoint; // 0xB8
		::FlowCanvas::ValueOutput_1<::System::String*>* waypathNameOutput; // 0xC0
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* entityInput; // 0xC8
		::FlowCanvas::ValueOutput_1<::System::String*>* waypointOutput; // 0xD0
		::FlowCanvas::FlowOutput* outputPort; // 0xD8
		::System::String* currentWay; // 0xE0
		::System::Boolean nodeStart; // 0xE8
		::System::Boolean attachEventFinish; // 0xE9
		::System::UInt32 listenEntityId; // 0xEC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETPASSEDPATROLPOINT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETPASSEDPATROLPOINT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void StartListen(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETPASSEDPATROLPOINT_STARTLISTEN_OFFSET))(this, f);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETPASSEDPATROLPOINT_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void BindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETPASSEDPATROLPOINT_BINDEVENT_OFFSET))(this);
		}

		::System::Void UnBindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETPASSEDPATROLPOINT_UNBINDEVENT_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETPASSEDPATROLPOINT_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void OnNodeTaskFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETPASSEDPATROLPOINT_ONNODETASKFINISH_OFFSET))(this);
		}

		::System::Void OnPassWayPoint(::Class_2_BE11F4E848E95621* waypointEvt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_BE11F4E848E95621*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETPASSEDPATROLPOINT_ONPASSWAYPOINT_OFFSET))(this, waypointEvt);
		}

		::System::String* _RegisterPorts_b__11_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETPASSEDPATROLPOINT__REGISTERPORTS_B__11_0_OFFSET))(this);
		}

		::System::String* _RegisterPorts_b__11_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETPASSEDPATROLPOINT__REGISTERPORTS_B__11_1_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETPASSEDPATROLPOINT___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
