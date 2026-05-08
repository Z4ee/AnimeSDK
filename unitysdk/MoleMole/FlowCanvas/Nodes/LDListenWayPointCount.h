#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_BE11F4E848E95621;
namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_BINDEVENT_OFFSET UNITYSDK_OFFSET(0x10E0C590)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_HANDLERWAYPOINTEVT_OFFSET UNITYSDK_OFFSET(0x10E0C8F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_INTERNALENTITYSTAYCOROUTINE_OFFSET UNITYSDK_OFFSET(0x10E0CDC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_ONENTITYENTERWAYPOINT_OFFSET UNITYSDK_OFFSET(0x10E0CA30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_ONENTITYEXITWAYPOINT_OFFSET UNITYSDK_OFFSET(0x10E0CBF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x10E0C730)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x10E0BD60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x10E0BDA0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_ONNODETASKFINISH_OFFSET UNITYSDK_OFFSET(0x10E0C980)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x10E0BB70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_STARTLISTEN_OFFSET UNITYSDK_OFFSET(0x10E0BFC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_UNBINDEVENT_OFFSET UNITYSDK_OFFSET(0x10E0BE20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x10E0CE40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT__REGISTERPORTS_B__19_0_OFFSET UNITYSDK_OFFSET(0x10E0CE80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT___BASE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x10E0CEB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x10E0CEC0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDListenWayPointCount_TypeDefinitionIndex = 69622;

	class LDListenWayPointCount : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		// static const ::System::Single stayTickInterval; // 0x0
		::FlowCanvas::FlowOutput* outputPort; // 0xA8
		::FlowCanvas::ValueInput_1<::System::String*>* waypathNameInput; // 0xB0
		::FlowCanvas::FlowOutput* wayPointInPort; // 0xB8
		::FlowCanvas::ValueInput_1<::System::String*>* waypointInput; // 0xC0
		::FlowCanvas::FlowOutput* wayPointOutPort; // 0xC8
		::FlowCanvas::ValueInput_1<::System::Int32>* triggerCountInput; // 0xD0
		::FlowCanvas::FlowInput* inputPort; // 0xD8
		::FlowCanvas::ValueInput_1<::MoleMole::Battle::Entity*>* entityInput; // 0xE0
		::System::String* currWayPoint; // 0xE8
		::FlowCanvas::FlowOutput* wayPointStayPort; // 0xF0
		::UnityEngine::Coroutine* stayWaypointCo; // 0xF8
		::System::String* currWayPath; // 0x100
		::System::UInt32 listenEntityId; // 0x108
		::System::Single timer; // 0x10C
		::System::Boolean nodeStart; // 0x110
		::System::Boolean attachEventFinish; // 0x111
		::System::Single elapsedStart; // 0x114
		::System::Int32 currentListenCount; // 0x118

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void StartListen(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_STARTLISTEN_OFFSET))(this, f);
		}

		::System::Void BindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_BINDEVENT_OFFSET))(this);
		}

		::System::Void UnBindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_UNBINDEVENT_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void HandlerWayPointEvt(::Class_2_BE11F4E848E95621* evtWayPoint)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_BE11F4E848E95621*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_HANDLERWAYPOINTEVT_OFFSET))(this, evtWayPoint);
		}

		::System::Void OnEntityEnterWaypoint(::System::String* path, ::System::String* waypoint, ::System::Single stayTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_ONENTITYENTERWAYPOINT_OFFSET))(this, path, waypoint, stayTime);
		}

		::System::Void OnEntityExitWaypoint(::System::String* waypath, ::System::String* waypoint)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_ONENTITYEXITWAYPOINT_OFFSET))(this, waypath, waypoint);
		}

		::System::Void OnNodeTaskFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_ONNODETASKFINISH_OFFSET))(this);
		}

		::System::Collections::IEnumerator* InternalEntityStayCoroutine()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT_INTERNALENTITYSTAYCOROUTINE_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__19_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT__REGISTERPORTS_B__19_0_OFFSET))(this, f);
		}

		::System::Void __base_OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT___BASE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLISTENWAYPOINTCOUNT___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
