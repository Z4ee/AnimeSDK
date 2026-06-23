#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/NodeGraphBase_GraphState.h"
#include "unitysdk/NodeGraph/NodeGraphBase_GraphType.h"
#include "unitysdk/System/Object.h"

namespace NodeGraph { class GraphNodeBase; }
namespace NodeGraph { class GraphNodeStart; }
namespace NodeGraph { class GraphTask; }
namespace NodeGraph { class IGraphConnection; }
namespace NodeGraph { class IGraphNode; }
namespace NodeGraph { class IGraphPort; }
namespace NodeGraph { class NodeGraphLocalVariables; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NODEGRAPH_NODEGRAPHBASE_ACTIVENODE_OFFSET UNITYSDK_OFFSET(0x1071B3C0)
#define NODEGRAPH_NODEGRAPHBASE_ADDNODE_OFFSET UNITYSDK_OFFSET(0x10723120)
#define NODEGRAPH_NODEGRAPHBASE_ADDTASK_OFFSET UNITYSDK_OFFSET(0x10723010)
#define NODEGRAPH_NODEGRAPHBASE_BUILDCONNECTION_OFFSET UNITYSDK_OFFSET(0x10723350)
#define NODEGRAPH_NODEGRAPHBASE_CLEARGRAPH_OFFSET UNITYSDK_OFFSET(0x107226C0)
#define NODEGRAPH_NODEGRAPHBASE_CLONEGRAPH_OFFSET UNITYSDK_OFFSET(0x10722E90)
#define NODEGRAPH_NODEGRAPHBASE_CREATECONNECTIONS_OFFSET UNITYSDK_OFFSET(0x10722210)
#define NODEGRAPH_NODEGRAPHBASE_CREATECONNECTION_OFFSET UNITYSDK_OFFSET(0x10723610)
#define NODEGRAPH_NODEGRAPHBASE_CREATENODES_OFFSET UNITYSDK_OFFSET(0x10722140)
#define NODEGRAPH_NODEGRAPHBASE_CREATETASKS_OFFSET UNITYSDK_OFFSET(0x10722090)
#define NODEGRAPH_NODEGRAPHBASE_ENDGRAPH_OFFSET UNITYSDK_OFFSET(0x107223B0)
#define NODEGRAPH_NODEGRAPHBASE_GETINPORT_1_OFFSET UNITYSDK_OFFSET(0x10723A80)
#define NODEGRAPH_NODEGRAPHBASE_GETINPORT_OFFSET UNITYSDK_OFFSET(0x10723930)
#define NODEGRAPH_NODEGRAPHBASE_GETNODE_OFFSET UNITYSDK_OFFSET(0x10720840)
#define NODEGRAPH_NODEGRAPHBASE_GETOUTPORT_1_OFFSET UNITYSDK_OFFSET(0x10723A10)
#define NODEGRAPH_NODEGRAPHBASE_GETOUTPORT_OFFSET UNITYSDK_OFFSET(0x10723850)
#define NODEGRAPH_NODEGRAPHBASE_GET_GRAPHID_OFFSET UNITYSDK_OFFSET(0x10721E50)
#define NODEGRAPH_NODEGRAPHBASE_GET_GRAPHVARIABLES_OFFSET UNITYSDK_OFFSET(0x10721E70)
#define NODEGRAPH_NODEGRAPHBASE_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x10721E30)
#define NODEGRAPH_NODEGRAPHBASE_GET_STATE_OFFSET UNITYSDK_OFFSET(0x10721E10)
#define NODEGRAPH_NODEGRAPHBASE_INITGRAPH_OFFSET UNITYSDK_OFFSET(0x10721E90)
#define NODEGRAPH_NODEGRAPHBASE_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x10723AF0)
#define NODEGRAPH_NODEGRAPHBASE_PAUSEGRAPH_OFFSET UNITYSDK_OFFSET(0x10722980)
#define NODEGRAPH_NODEGRAPHBASE_RESUMEGRAPH_OFFSET UNITYSDK_OFFSET(0x10722B30)
#define NODEGRAPH_NODEGRAPHBASE_RUNNODE_OFFSET UNITYSDK_OFFSET(0x10722CF0)
#define NODEGRAPH_NODEGRAPHBASE_SET_GRAPHID_OFFSET UNITYSDK_OFFSET(0x10721E60)
#define NODEGRAPH_NODEGRAPHBASE_SET_GRAPHVARIABLES_OFFSET UNITYSDK_OFFSET(0x10721E80)
#define NODEGRAPH_NODEGRAPHBASE_SET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x10721E40)
#define NODEGRAPH_NODEGRAPHBASE_SET_STATE_OFFSET UNITYSDK_OFFSET(0x10721E20)
#define NODEGRAPH_NODEGRAPHBASE_STARTGRAPH_OFFSET UNITYSDK_OFFSET(0x10722340)
#define NODEGRAPH_NODEGRAPHBASE_TRTGETNODE_OFFSET UNITYSDK_OFFSET(0x10722F00)
#define NODEGRAPH_NODEGRAPHBASE_UPDATEGRAPH_OFFSET UNITYSDK_OFFSET(0x10723C60)
#define NODEGRAPH_NODEGRAPHBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x10723F30)

namespace NodeGraph
{
	inline static constexpr unsigned int NodeGraphBase_TypeDefinitionIndex = 40049;

	class NodeGraphBase : public ::System::Object
	{
	public:
		::NodeGraph::GraphNodeStart* _nodeStart; // 0x10
		::System::Collections::Generic::List_1<::NodeGraph::GraphTask*>* _taskList; // 0x18
		::NodeGraph::NodeGraphLocalVariables* _GraphVariables_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::NodeGraph::GraphNodeBase*>* _nodeMap; // 0x28
		::System::Collections::Generic::List_1<::NodeGraph::IGraphNode*>* _runningList; // 0x30
		::System::Collections::Generic::List_1<::NodeGraph::IGraphConnection*>* _connections; // 0x38
		::System::Collections::Generic::Dictionary_2<::NodeGraph::IGraphPort*, ::NodeGraph::IGraphConnection*>* _connectionMap; // 0x40
		::NodeGraph::NodeGraphBase_GraphState _State_k__BackingField; // 0x48
		::System::UInt32 _GraphId_k__BackingField; // 0x4C
		::System::Int32 _runIndex; // 0x50
		::System::Boolean _IsPaused_k__BackingField; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHBASE__CTOR_OFFSET))(this);
		}

		::NodeGraph::NodeGraphBase_GraphState get_State()
		{
			return ((::NodeGraph::NodeGraphBase_GraphState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHBASE_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::NodeGraph::NodeGraphBase_GraphState value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase_GraphState))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHBASE_SET_STATE_OFFSET))(this, value);
		}

		::System::Boolean get_IsPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHBASE_GET_ISPAUSED_OFFSET))(this);
		}

		::System::Void set_IsPaused(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHBASE_SET_ISPAUSED_OFFSET))(this, value);
		}

		::System::UInt32 get_GraphId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHBASE_GET_GRAPHID_OFFSET))(this);
		}

		::System::Void set_GraphId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHBASE_SET_GRAPHID_OFFSET))(this, value);
		}

		::NodeGraph::NodeGraphLocalVariables* get_GraphVariables()
		{
			return ((::NodeGraph::NodeGraphLocalVariables*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHBASE_GET_GRAPHVARIABLES_OFFSET))(this);
		}

		::System::Void set_GraphVariables(::NodeGraph::NodeGraphLocalVariables* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphLocalVariables*))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHBASE_SET_GRAPHVARIABLES_OFFSET))(this, value);
		}

		::System::Void InitGraph(::System::UInt32 graphId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHBASE_INITGRAPH_OFFSET))(this, graphId);
		}

		::System::Void StartGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHBASE_STARTGRAPH_OFFSET))(this);
		}

		::System::Void EndGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHBASE_ENDGRAPH_OFFSET))(this);
		}

		::System::Void ClearGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHBASE_CLEARGRAPH_OFFSET))(this);
		}

		::System::Void PauseGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHBASE_PAUSEGRAPH_OFFSET))(this);
		}

		::System::Void ResumeGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHBASE_RESUMEGRAPH_OFFSET))(this);
		}

		::NodeGraph::NodeGraphBase* CloneGraph()
		{
			return ((::NodeGraph::NodeGraphBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHBASE_CLONEGRAPH_OFFSET))(this);
		}

		::NodeGraph::GraphNodeBase* GetNode(::System::UInt32 nodeId)
		{
			return ((::NodeGraph::GraphNodeBase*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHBASE_GETNODE_OFFSET))(this, nodeId);
		}

		::System::Void ActiveNode(::NodeGraph::IGraphNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::IGraphNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHBASE_ACTIVENODE_OFFSET))(this, node);
		}

		::System::Void RunNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHBASE_RUNNODE_OFFSET))(this);
		}

		::System::Boolean TrtGetNode(::System::UInt32 key, ::NodeGraph::GraphNodeBase*& node)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NodeGraph::GraphNodeBase*&))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHBASE_TRTGETNODE_OFFSET))(this, key, node);
		}

		::System::Void AddTask(::NodeGraph::GraphTask* task)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::GraphTask*))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHBASE_ADDTASK_OFFSET))(this, task);
		}

		::System::Void AddNode(::System::UInt32 key, ::NodeGraph::GraphNodeBase* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NodeGraph::GraphNodeBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHBASE_ADDNODE_OFFSET))(this, key, node);
		}

		::System::Void CreateTasks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHBASE_CREATETASKS_OFFSET))(this);
		}

		::System::Void CreateNodes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHBASE_CREATENODES_OFFSET))(this);
		}

		::System::Void CreateConnections()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHBASE_CREATECONNECTIONS_OFFSET))(this);
		}

		::System::Void BuildConnection(::NodeGraph::IGraphPort* source, ::NodeGraph::IGraphPort* target)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::IGraphPort*, ::NodeGraph::IGraphPort*))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHBASE_BUILDCONNECTION_OFFSET))(this, source, target);
		}

		::NodeGraph::IGraphConnection* CreateConnection(::NodeGraph::IGraphPort* source, ::NodeGraph::IGraphPort* target)
		{
			return ((::NodeGraph::IGraphConnection*(*)(::PVOID, ::NodeGraph::IGraphPort*, ::NodeGraph::IGraphPort*))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHBASE_CREATECONNECTION_OFFSET))(this, source, target);
		}

		::NodeGraph::IGraphPort* GetOutPort(::System::UInt32 nodeId, ::System::String* portName)
		{
			return ((::NodeGraph::IGraphPort*(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHBASE_GETOUTPORT_OFFSET))(this, nodeId, portName);
		}

		::NodeGraph::IGraphPort* GetInPort(::System::UInt32 nodeId, ::System::String* portName)
		{
			return ((::NodeGraph::IGraphPort*(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHBASE_GETINPORT_OFFSET))(this, nodeId, portName);
		}

		::NodeGraph::IGraphPort* GetOutPort_1(::System::UInt32 nodeId, ::System::Int32 index)
		{
			return ((::NodeGraph::IGraphPort*(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHBASE_GETOUTPORT_1_OFFSET))(this, nodeId, index);
		}

		::NodeGraph::IGraphPort* GetInPort_1(::System::UInt32 nodeId, ::System::Int32 index)
		{
			return ((::NodeGraph::IGraphPort*(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHBASE_GETINPORT_1_OFFSET))(this, nodeId, index);
		}

		::System::Void OnGraphStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHBASE_ONGRAPHSTART_OFFSET))(this);
		}

		::System::Void UpdateGraph(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_NODEGRAPHBASE_UPDATEGRAPH_OFFSET))(this, deltaTime);
		}
	};
}
