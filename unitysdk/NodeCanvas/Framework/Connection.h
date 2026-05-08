#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class Graph; }
namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { class Node; }
namespace System { class String; }
namespace UnityEngine { class Component; }

#define NODECANVAS_FRAMEWORK_CONNECTION_CREATE_OFFSET UNITYSDK_OFFSET(0x1B0F1D40)
#define NODECANVAS_FRAMEWORK_CONNECTION_DUPLICATE_OFFSET UNITYSDK_OFFSET(0x1B0F2390)
#define NODECANVAS_FRAMEWORK_CONNECTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B0F1A40)
#define NODECANVAS_FRAMEWORK_CONNECTION_GET_GRAPH_OFFSET UNITYSDK_OFFSET(0x1B0F1D10)
#define NODECANVAS_FRAMEWORK_CONNECTION_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1B0F1800)
#define NODECANVAS_FRAMEWORK_CONNECTION_GET_SOURCENODE_OFFSET UNITYSDK_OFFSET(0x1B0F1C70)
#define NODECANVAS_FRAMEWORK_CONNECTION_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1B0F1CF0)
#define NODECANVAS_FRAMEWORK_CONNECTION_GET_TARGETNODE_OFFSET UNITYSDK_OFFSET(0x1B0F1C90)
#define NODECANVAS_FRAMEWORK_CONNECTION_GET_UID_OFFSET UNITYSDK_OFFSET(0x1B0F1C10)
#define NODECANVAS_FRAMEWORK_CONNECTION_NODECANVAS_FRAMEWORK_IGRAPHELEMENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B0F1CB0)
#define NODECANVAS_FRAMEWORK_CONNECTION_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1B0F2AB0)
#define NODECANVAS_FRAMEWORK_CONNECTION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B0F2AD0)
#define NODECANVAS_FRAMEWORK_CONNECTION_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1B0F2AC0)
#define NODECANVAS_FRAMEWORK_CONNECTION_RESET_OFFSET UNITYSDK_OFFSET(0x1B0F1A00)
#define NODECANVAS_FRAMEWORK_CONNECTION_SETSOURCENODE_OFFSET UNITYSDK_OFFSET(0x1B0F1EF0)
#define NODECANVAS_FRAMEWORK_CONNECTION_SETTARGETNODE_OFFSET UNITYSDK_OFFSET(0x1B0F2140)
#define NODECANVAS_FRAMEWORK_CONNECTION_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1B0F17B0)
#define NODECANVAS_FRAMEWORK_CONNECTION_SET_SOURCENODE_OFFSET UNITYSDK_OFFSET(0x1B0F1C80)
#define NODECANVAS_FRAMEWORK_CONNECTION_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x1B0F1D00)
#define NODECANVAS_FRAMEWORK_CONNECTION_SET_TARGETNODE_OFFSET UNITYSDK_OFFSET(0x1B0F1CA0)
#define NODECANVAS_FRAMEWORK_CONNECTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B0F2AE0)
#define NODECANVAS_FRAMEWORK_CONNECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0F1D30)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int Connection_TypeDefinitionIndex = 28109;

	class Connection : public ::System::Object
	{
	public:
		::NodeCanvas::Framework::Node* _targetNode; // 0x10
		::NodeCanvas::Framework::Node* _sourceNode; // 0x18
		::System::String* _UID; // 0x20
		::System::Boolean _isDisabled; // 0x28
		::NodeCanvas::Framework::Status _status; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONNECTION__CTOR_OFFSET))(this);
		}

		::System::String* get_UID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONNECTION_GET_UID_OFFSET))(this);
		}

		::NodeCanvas::Framework::Node* get_sourceNode()
		{
			return ((::NodeCanvas::Framework::Node*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONNECTION_GET_SOURCENODE_OFFSET))(this);
		}

		::System::Void set_sourceNode(::NodeCanvas::Framework::Node* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Node*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONNECTION_SET_SOURCENODE_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::Node* get_targetNode()
		{
			return ((::NodeCanvas::Framework::Node*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONNECTION_GET_TARGETNODE_OFFSET))(this);
		}

		::System::Void set_targetNode(::NodeCanvas::Framework::Node* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Node*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONNECTION_SET_TARGETNODE_OFFSET))(this, value);
		}

		::System::String* NodeCanvas_Framework_IGraphElement_get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONNECTION_NODECANVAS_FRAMEWORK_IGRAPHELEMENT_GET_NAME_OFFSET))(this);
		}

		::System::Boolean get_isActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONNECTION_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_isActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONNECTION_SET_ISACTIVE_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::Status get_status()
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONNECTION_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_status(::NodeCanvas::Framework::Status value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::Framework::Status))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONNECTION_SET_STATUS_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::Graph* get_graph()
		{
			return ((::NodeCanvas::Framework::Graph*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONNECTION_GET_GRAPH_OFFSET))(this);
		}

		static ::NodeCanvas::Framework::Connection* Create(::NodeCanvas::Framework::Node* source, ::NodeCanvas::Framework::Node* target, ::System::Int32 sourceIndex, ::System::Int32 targetIndex)
		{
			return ((::NodeCanvas::Framework::Connection*(*)(::NodeCanvas::Framework::Node*, ::NodeCanvas::Framework::Node*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONNECTION_CREATE_OFFSET))(source, target, sourceIndex, targetIndex);
		}

		::NodeCanvas::Framework::Connection* Duplicate(::NodeCanvas::Framework::Node* newSource, ::NodeCanvas::Framework::Node* newTarget)
		{
			return ((::NodeCanvas::Framework::Connection*(*)(::PVOID, ::NodeCanvas::Framework::Node*, ::NodeCanvas::Framework::Node*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONNECTION_DUPLICATE_OFFSET))(this, newSource, newTarget);
		}

		::System::Int32 SetSourceNode(::NodeCanvas::Framework::Node* newSource, ::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::NodeCanvas::Framework::Node*, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONNECTION_SETSOURCENODE_OFFSET))(this, newSource, index);
		}

		::System::Int32 SetTargetNode(::NodeCanvas::Framework::Node* newTarget, ::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::NodeCanvas::Framework::Node*, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONNECTION_SETTARGETNODE_OFFSET))(this, newTarget, index);
		}

		::NodeCanvas::Framework::Status Execute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONNECTION_EXECUTE_OFFSET))(this, agent, blackboard);
		}

		::System::Void Reset(::System::Boolean recursively)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONNECTION_RESET_OFFSET))(this, recursively);
		}

		::System::Void OnCreate(::System::Int32 sourceIndex, ::System::Int32 targetIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONNECTION_ONCREATE_OFFSET))(this, sourceIndex, targetIndex);
		}

		::System::Void OnValidate(::System::Int32 sourceIndex, ::System::Int32 targetIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONNECTION_ONVALIDATE_OFFSET))(this, sourceIndex, targetIndex);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONNECTION_ONDESTROY_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_CONNECTION_TOSTRING_OFFSET))(this);
		}
	};
}
