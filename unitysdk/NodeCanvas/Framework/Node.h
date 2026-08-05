#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"
#include "unitysdk/ParadoxNotion/Alignment2x2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace NodeCanvas::Framework { class Connection; }
namespace NodeCanvas::Framework { class Graph; }
namespace NodeCanvas::Framework { class IBlackboard; }
namespace System { class Action; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Coroutine; }

#define NODECANVAS_FRAMEWORK_NODE_ARENODESCONNECTED_OFFSET UNITYSDK_OFFSET(0x1EBBE570)
#define NODECANVAS_FRAMEWORK_NODE_CANCONNECTFROMSOURCE_OFFSET UNITYSDK_OFFSET(0x1EBBE560)
#define NODECANVAS_FRAMEWORK_NODE_CANCONNECTTOTARGET_OFFSET UNITYSDK_OFFSET(0x1EBBE550)
#define NODECANVAS_FRAMEWORK_NODE_CREATE_OFFSET UNITYSDK_OFFSET(0x1EBBD100)
#define NODECANVAS_FRAMEWORK_NODE_DUPLICATE_OFFSET UNITYSDK_OFFSET(0x1EBBD490)
#define NODECANVAS_FRAMEWORK_NODE_ERROR_OFFSET UNITYSDK_OFFSET(0x1EBBE110)
#define NODECANVAS_FRAMEWORK_NODE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1EBBDF20)
#define NODECANVAS_FRAMEWORK_NODE_FAIL_OFFSET UNITYSDK_OFFSET(0x1EBBE2F0)
#define NODECANVAS_FRAMEWORK_NODE_GETCHILDNODES_OFFSET UNITYSDK_OFFSET(0x1EBBEA30)
#define NODECANVAS_FRAMEWORK_NODE_GETHARDERROR_OFFSET UNITYSDK_OFFSET(0x1EBBDB40)
#define NODECANVAS_FRAMEWORK_NODE_GETPARENTNODES_OFFSET UNITYSDK_OFFSET(0x1EBBE910)
#define NODECANVAS_FRAMEWORK_NODE_GETWARNINGORERROR_OFFSET UNITYSDK_OFFSET(0x1EBBEC90)
#define NODECANVAS_FRAMEWORK_NODE_GET_BREAKPOINTREACHED_OFFSET UNITYSDK_OFFSET(0x1EBBD000)
#define NODECANVAS_FRAMEWORK_NODE_GET_COMMENTS_OFFSET UNITYSDK_OFFSET(0x1EBBCC70)
#define NODECANVAS_FRAMEWORK_NODE_GET_CUSTOMNAME_OFFSET UNITYSDK_OFFSET(0x1EBBCC10)
#define NODECANVAS_FRAMEWORK_NODE_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1EBBCCC0)
#define NODECANVAS_FRAMEWORK_NODE_GET_ELAPSEDTIME_OFFSET UNITYSDK_OFFSET(0x1EBBCF90)
#define NODECANVAS_FRAMEWORK_NODE_GET_GRAPHAGENT_OFFSET UNITYSDK_OFFSET(0x1EBBCE40)
#define NODECANVAS_FRAMEWORK_NODE_GET_GRAPHBLACKBOARD_OFFSET UNITYSDK_OFFSET(0x1EBBAE90)
#define NODECANVAS_FRAMEWORK_NODE_GET_GRAPH_OFFSET UNITYSDK_OFFSET(0x1EBBCAF0)
#define NODECANVAS_FRAMEWORK_NODE_GET_ID_OFFSET UNITYSDK_OFFSET(0x1EBBCB10)
#define NODECANVAS_FRAMEWORK_NODE_GET_INCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1EBBCBB0)
#define NODECANVAS_FRAMEWORK_NODE_GET_ISBREAKPOINT_OFFSET UNITYSDK_OFFSET(0x1EBBCC90)
#define NODECANVAS_FRAMEWORK_NODE_GET_ISCHECKED_OFFSET UNITYSDK_OFFSET(0x1EBBCFE0)
#define NODECANVAS_FRAMEWORK_NODE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1EBBA4E0)
#define NODECANVAS_FRAMEWORK_NODE_GET_OUTCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1EBBCBD0)
#define NODECANVAS_FRAMEWORK_NODE_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1EBBCBF0)
#define NODECANVAS_FRAMEWORK_NODE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x1EBBCD60)
#define NODECANVAS_FRAMEWORK_NODE_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1EBBCDF0)
#define NODECANVAS_FRAMEWORK_NODE_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1EBBCC50)
#define NODECANVAS_FRAMEWORK_NODE_GET_TIMESTARTED_OFFSET UNITYSDK_OFFSET(0x1EBBCFC0)
#define NODECANVAS_FRAMEWORK_NODE_GET_TNAME_OFFSET UNITYSDK_OFFSET(0x1EBBCC30)
#define NODECANVAS_FRAMEWORK_NODE_GET_TUID_OFFSET UNITYSDK_OFFSET(0x1EBBCB90)
#define NODECANVAS_FRAMEWORK_NODE_GET_UID_OFFSET UNITYSDK_OFFSET(0x1EBBCB30)
#define NODECANVAS_FRAMEWORK_NODE_ISCHILDOF_OFFSET UNITYSDK_OFFSET(0x1EBBEB50)
#define NODECANVAS_FRAMEWORK_NODE_ISNEWCONNECTIONALLOWED_OFFSET UNITYSDK_OFFSET(0x1EBBE440)
#define NODECANVAS_FRAMEWORK_NODE_ISPARENTOF_OFFSET UNITYSDK_OFFSET(0x1EBBEBF0)
#define NODECANVAS_FRAMEWORK_NODE_ONCHILDCONNECTED_OFFSET UNITYSDK_OFFSET(0x1EBBEEA0)
#define NODECANVAS_FRAMEWORK_NODE_ONCHILDDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x1EBBEEB0)
#define NODECANVAS_FRAMEWORK_NODE_ONCHILDRENCONNECTIONSSORTED_OFFSET UNITYSDK_OFFSET(0x1EBBEEC0)
#define NODECANVAS_FRAMEWORK_NODE_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1EBBEE50)
#define NODECANVAS_FRAMEWORK_NODE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1EBBEE70)
#define NODECANVAS_FRAMEWORK_NODE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1EBBEE30)
#define NODECANVAS_FRAMEWORK_NODE_ONGRAPHPAUSED_OFFSET UNITYSDK_OFFSET(0x1EBBEF10)
#define NODECANVAS_FRAMEWORK_NODE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1EBBEED0)
#define NODECANVAS_FRAMEWORK_NODE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1EBBEEF0)
#define NODECANVAS_FRAMEWORK_NODE_ONGRAPHUNPAUSED_OFFSET UNITYSDK_OFFSET(0x1EBBEF20)
#define NODECANVAS_FRAMEWORK_NODE_ONPARENTCONNECTED_OFFSET UNITYSDK_OFFSET(0x1EBBEE80)
#define NODECANVAS_FRAMEWORK_NODE_ONPARENTDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x1EBBEE90)
#define NODECANVAS_FRAMEWORK_NODE_ONPOSTGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1EBBEEE0)
#define NODECANVAS_FRAMEWORK_NODE_ONPOSTGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1EBBEF00)
#define NODECANVAS_FRAMEWORK_NODE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1EBBEE40)
#define NODECANVAS_FRAMEWORK_NODE_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1EBBEE60)
#define NODECANVAS_FRAMEWORK_NODE_RESET_OFFSET UNITYSDK_OFFSET(0x1EBBDF70)
#define NODECANVAS_FRAMEWORK_NODE_SENDEVENT_OFFSET UNITYSDK_OFFSET(0x1EBBE410)
#define NODECANVAS_FRAMEWORK_NODE_SETSTATUS_OFFSET UNITYSDK_OFFSET(0x1EBBE3D0)
#define NODECANVAS_FRAMEWORK_NODE_SET_BREAKPOINTREACHED_OFFSET UNITYSDK_OFFSET(0x1EBBD010)
#define NODECANVAS_FRAMEWORK_NODE_SET_COMMENTS_OFFSET UNITYSDK_OFFSET(0x1EBBCC80)
#define NODECANVAS_FRAMEWORK_NODE_SET_CUSTOMNAME_OFFSET UNITYSDK_OFFSET(0x1EBBCC20)
#define NODECANVAS_FRAMEWORK_NODE_SET_GRAPH_OFFSET UNITYSDK_OFFSET(0x1EBBCB00)
#define NODECANVAS_FRAMEWORK_NODE_SET_ID_OFFSET UNITYSDK_OFFSET(0x1EBBCB20)
#define NODECANVAS_FRAMEWORK_NODE_SET_INCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1EBBCBC0)
#define NODECANVAS_FRAMEWORK_NODE_SET_ISBREAKPOINT_OFFSET UNITYSDK_OFFSET(0x1EBBCCA0)
#define NODECANVAS_FRAMEWORK_NODE_SET_ISCHECKED_OFFSET UNITYSDK_OFFSET(0x1EBBCFF0)
#define NODECANVAS_FRAMEWORK_NODE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1EBBCCB0)
#define NODECANVAS_FRAMEWORK_NODE_SET_OUTCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1EBBCBE0)
#define NODECANVAS_FRAMEWORK_NODE_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1EBBCC00)
#define NODECANVAS_FRAMEWORK_NODE_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x1EBBCE00)
#define NODECANVAS_FRAMEWORK_NODE_SET_TAG_OFFSET UNITYSDK_OFFSET(0x1EBBCC60)
#define NODECANVAS_FRAMEWORK_NODE_SET_TIMESTARTED_OFFSET UNITYSDK_OFFSET(0x1EBBCFD0)
#define NODECANVAS_FRAMEWORK_NODE_SET_TNAME_OFFSET UNITYSDK_OFFSET(0x1EBBCC40)
#define NODECANVAS_FRAMEWORK_NODE_SET_TUID_OFFSET UNITYSDK_OFFSET(0x1EBBCBA0)
#define NODECANVAS_FRAMEWORK_NODE_STARTCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1EBBE680)
#define NODECANVAS_FRAMEWORK_NODE_STOPCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1EBBE7D0)
#define NODECANVAS_FRAMEWORK_NODE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EBBEF30)
#define NODECANVAS_FRAMEWORK_NODE_VALIDATE_OFFSET UNITYSDK_OFFSET(0x1EBBD360)
#define NODECANVAS_FRAMEWORK_NODE_WARN_OFFSET UNITYSDK_OFFSET(0x1EBBE3C0)
#define NODECANVAS_FRAMEWORK_NODE_YIELDBREAK_OFFSET UNITYSDK_OFFSET(0x1EBBE0C0)
#define NODECANVAS_FRAMEWORK_NODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBBD020)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int Node_TypeDefinitionIndex = 30204;

	class Node : public ::System::Object
	{
	public:
		::System::String* _nameCache; // 0x10
		::System::String* _descriptionCache; // 0x18
		::System::Collections::Generic::List_1<::NodeCanvas::Framework::Connection*>* _inConnections; // 0x20
		::System::String* _name; // 0x28
		::NodeCanvas::Framework::Graph* _graph; // 0x30
		::System::String* _tag; // 0x38
		::System::String* _comment; // 0x40
		::System::String* _UID; // 0x48
		::System::Collections::Generic::List_1<::NodeCanvas::Framework::Connection*>* _outConnections; // 0x50
		::System::Int32 _priorityCache; // 0x58
		::UnityEngine::Vector2 _position; // 0x5C
		::System::Int32 _ID; // 0x64
		::System::Single _timeStarted_k__BackingField; // 0x68
		::System::Boolean _isChecked_k__BackingField; // 0x6C
		::System::Boolean _isBreakpoint; // 0x6D
		::System::Boolean _breakPointReached_k__BackingField; // 0x6E
		::NodeCanvas::Framework::Status _status; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE__CTOR_OFFSET))(this);
		}

		::NodeCanvas::Framework::Graph* get_graph()
		{
			return ((::NodeCanvas::Framework::Graph*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_GET_GRAPH_OFFSET))(this);
		}

		::System::Void set_graph(::NodeCanvas::Framework::Graph* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Graph*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_SET_GRAPH_OFFSET))(this, value);
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_SET_ID_OFFSET))(this, value);
		}

		::System::String* get_UID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_GET_UID_OFFSET))(this);
		}

		::System::String* get_TUID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_GET_TUID_OFFSET))(this);
		}

		::System::Void set_TUID(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_SET_TUID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::NodeCanvas::Framework::Connection*>* get_inConnections()
		{
			return ((::System::Collections::Generic::List_1<::NodeCanvas::Framework::Connection*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_GET_INCONNECTIONS_OFFSET))(this);
		}

		::System::Void set_inConnections(::System::Collections::Generic::List_1<::NodeCanvas::Framework::Connection*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NodeCanvas::Framework::Connection*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_SET_INCONNECTIONS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::NodeCanvas::Framework::Connection*>* get_outConnections()
		{
			return ((::System::Collections::Generic::List_1<::NodeCanvas::Framework::Connection*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_GET_OUTCONNECTIONS_OFFSET))(this);
		}

		::System::Void set_outConnections(::System::Collections::Generic::List_1<::NodeCanvas::Framework::Connection*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NodeCanvas::Framework::Connection*>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_SET_OUTCONNECTIONS_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_position()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_position(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_SET_POSITION_OFFSET))(this, value);
		}

		::System::String* get_customName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_GET_CUSTOMNAME_OFFSET))(this);
		}

		::System::Void set_customName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_SET_CUSTOMNAME_OFFSET))(this, value);
		}

		::System::String* get_TName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_GET_TNAME_OFFSET))(this);
		}

		::System::Void set_TName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_SET_TNAME_OFFSET))(this, value);
		}

		::System::String* get_tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_GET_TAG_OFFSET))(this);
		}

		::System::Void set_tag(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_SET_TAG_OFFSET))(this, value);
		}

		::System::String* get_comments()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_GET_COMMENTS_OFFSET))(this);
		}

		::System::Void set_comments(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_SET_COMMENTS_OFFSET))(this, value);
		}

		::System::Boolean get_isBreakpoint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_GET_ISBREAKPOINT_OFFSET))(this);
		}

		::System::Void set_isBreakpoint(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_SET_ISBREAKPOINT_OFFSET))(this, value);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_SET_NAME_OFFSET))(this, value);
		}

		::System::String* get_description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Int32 get_priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_GET_PRIORITY_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status get_status()
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_status(::NodeCanvas::Framework::Status value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Status))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_SET_STATUS_OFFSET))(this, value);
		}

		::UnityEngine::Component* get_graphAgent()
		{
			return ((::UnityEngine::Component*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_GET_GRAPHAGENT_OFFSET))(this);
		}

		::NodeCanvas::Framework::IBlackboard* get_graphBlackboard()
		{
			return ((::NodeCanvas::Framework::IBlackboard*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_GET_GRAPHBLACKBOARD_OFFSET))(this);
		}

		::System::Single get_elapsedTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_GET_ELAPSEDTIME_OFFSET))(this);
		}

		::System::Single get_timeStarted()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_GET_TIMESTARTED_OFFSET))(this);
		}

		::System::Void set_timeStarted(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_SET_TIMESTARTED_OFFSET))(this, value);
		}

		::System::Boolean get_isChecked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_GET_ISCHECKED_OFFSET))(this);
		}

		::System::Void set_isChecked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_SET_ISCHECKED_OFFSET))(this, value);
		}

		::System::Boolean get_breakPointReached()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_GET_BREAKPOINTREACHED_OFFSET))(this);
		}

		::System::Void set_breakPointReached(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_SET_BREAKPOINTREACHED_OFFSET))(this, value);
		}

		static ::NodeCanvas::Framework::Node* Create(::NodeCanvas::Framework::Graph* targetGraph, ::System::Type* nodeType, ::UnityEngine::Vector2 pos)
		{
			return ((::NodeCanvas::Framework::Node*(*)(::NodeCanvas::Framework::Graph*, ::System::Type*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_CREATE_OFFSET))(targetGraph, nodeType, pos);
		}

		::NodeCanvas::Framework::Node* Duplicate(::NodeCanvas::Framework::Graph* targetGraph)
		{
			return ((::NodeCanvas::Framework::Node*(*)(::PVOID, ::NodeCanvas::Framework::Graph*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_DUPLICATE_OFFSET))(this, targetGraph);
		}

		::System::Void Validate(::NodeCanvas::Framework::Graph* assignedGraph)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Graph*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_VALIDATE_OFFSET))(this, assignedGraph);
		}

		::NodeCanvas::Framework::Status Execute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_EXECUTE_OFFSET))(this, agent, blackboard);
		}

		::System::Void Reset(::System::Boolean recursively)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_RESET_OFFSET))(this, recursively);
		}

		::System::Collections::IEnumerator* YieldBreak(::System::Action* resume)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_YIELDBREAK_OFFSET))(this, resume);
		}

		::NodeCanvas::Framework::Status Error(::System::Object* msg)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_ERROR_OFFSET))(this, msg);
		}

		::NodeCanvas::Framework::Status Fail(::System::String* msg)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_FAIL_OFFSET))(this, msg);
		}

		::System::Void Warn(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_WARN_OFFSET))(this, msg);
		}

		::System::Void SetStatus(::NodeCanvas::Framework::Status status)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Status))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_SETSTATUS_OFFSET))(this, status);
		}

		::System::Void SendEvent(::System::String* eventName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_SENDEVENT_OFFSET))(this, eventName);
		}

		static ::System::Boolean IsNewConnectionAllowed(::NodeCanvas::Framework::Node* sourceNode, ::NodeCanvas::Framework::Node* targetNode, ::NodeCanvas::Framework::Connection* refConnection)
		{
			return ((::System::Boolean(*)(::NodeCanvas::Framework::Node*, ::NodeCanvas::Framework::Node*, ::NodeCanvas::Framework::Connection*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_ISNEWCONNECTIONALLOWED_OFFSET))(sourceNode, targetNode, refConnection);
		}

		::System::Boolean CanConnectToTarget(::NodeCanvas::Framework::Node* targetNode)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeCanvas::Framework::Node*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_CANCONNECTTOTARGET_OFFSET))(this, targetNode);
		}

		::System::Boolean CanConnectFromSource(::NodeCanvas::Framework::Node* sourceNode)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeCanvas::Framework::Node*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_CANCONNECTFROMSOURCE_OFFSET))(this, sourceNode);
		}

		static ::System::Boolean AreNodesConnected(::NodeCanvas::Framework::Node* a, ::NodeCanvas::Framework::Node* b)
		{
			return ((::System::Boolean(*)(::NodeCanvas::Framework::Node*, ::NodeCanvas::Framework::Node*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_ARENODESCONNECTED_OFFSET))(a, b);
		}

		::UnityEngine::Coroutine* StartCoroutine(::System::Collections::IEnumerator* routine)
		{
			return ((::UnityEngine::Coroutine*(*)(::PVOID, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_STARTCOROUTINE_OFFSET))(this, routine);
		}

		::System::Void StopCoroutine(::UnityEngine::Coroutine* routine)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Coroutine*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_STOPCOROUTINE_OFFSET))(this, routine);
		}

		::System::Collections::Generic::IEnumerable_1<::NodeCanvas::Framework::Node*>* GetParentNodes()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::NodeCanvas::Framework::Node*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_GETPARENTNODES_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::NodeCanvas::Framework::Node*>* GetChildNodes()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::NodeCanvas::Framework::Node*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_GETCHILDNODES_OFFSET))(this);
		}

		::System::Boolean IsChildOf(::NodeCanvas::Framework::Node* parentNode)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeCanvas::Framework::Node*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_ISCHILDOF_OFFSET))(this, parentNode);
		}

		::System::Boolean IsParentOf(::NodeCanvas::Framework::Node* childNode)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeCanvas::Framework::Node*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_ISPARENTOF_OFFSET))(this, childNode);
		}

		::System::String* GetWarningOrError()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_GETWARNINGORERROR_OFFSET))(this);
		}

		::System::String* GetHardError()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_GETHARDERROR_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_ONEXECUTE_OFFSET))(this, agent, blackboard);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_ONRESET_OFFSET))(this);
		}

		::System::Void OnCreate(::NodeCanvas::Framework::Graph* assignedGraph)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Graph*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_ONCREATE_OFFSET))(this, assignedGraph);
		}

		::System::Void OnValidate(::NodeCanvas::Framework::Graph* assignedGraph)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Graph*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_ONVALIDATE_OFFSET))(this, assignedGraph);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnParentConnected(::System::Int32 connectionIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_ONPARENTCONNECTED_OFFSET))(this, connectionIndex);
		}

		::System::Void OnParentDisconnected(::System::Int32 connectionIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_ONPARENTDISCONNECTED_OFFSET))(this, connectionIndex);
		}

		::System::Void OnChildConnected(::System::Int32 connectionIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_ONCHILDCONNECTED_OFFSET))(this, connectionIndex);
		}

		::System::Void OnChildDisconnected(::System::Int32 connectionIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_ONCHILDDISCONNECTED_OFFSET))(this, connectionIndex);
		}

		::System::Void OnChildrenConnectionsSorted(::Il2CppArray<::System::Int32>* oldIndeces)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_ONCHILDRENCONNECTIONSSORTED_OFFSET))(this, oldIndeces);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnPostGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_ONPOSTGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void OnPostGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_ONPOSTGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void OnGraphPaused()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_ONGRAPHPAUSED_OFFSET))(this);
		}

		::System::Void OnGraphUnpaused()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_ONGRAPHUNPAUSED_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_NODE_TOSTRING_OFFSET))(this);
		}
	};
}
