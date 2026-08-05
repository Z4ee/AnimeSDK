#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphPortDirection.h"
#include "unitysdk/NodeGraph/IGraphNode_NodeState.h"
#include "unitysdk/System/Object.h"

namespace NodeGraph { class IGraphPort; }
namespace NodeGraph { class NodeGraphBase; }
namespace System { class String; }

#define NODEGRAPH_IGRAPHNODE_ACTIVENODE_OFFSET UNITYSDK_OFFSET(0x142B63D0)
#define NODEGRAPH_IGRAPHNODE_CLEARNODE_OFFSET UNITYSDK_OFFSET(0x142B67E0)
#define NODEGRAPH_IGRAPHNODE_ENDNODE_OFFSET UNITYSDK_OFFSET(0x142B68B0)
#define NODEGRAPH_IGRAPHNODE_GET_GRAPHID_OFFSET UNITYSDK_OFFSET(0x142B62B0)
#define NODEGRAPH_IGRAPHNODE_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x142B6350)
#define NODEGRAPH_IGRAPHNODE_GET_NODEGRAPH_OFFSET UNITYSDK_OFFSET(0x142B6320)
#define NODEGRAPH_IGRAPHNODE_GET_NODEID_OFFSET UNITYSDK_OFFSET(0x142B6300)
#define NODEGRAPH_IGRAPHNODE_GET_NODENAME_OFFSET UNITYSDK_OFFSET(0x142B62A0)
#define NODEGRAPH_IGRAPHNODE_GET_STATE_OFFSET UNITYSDK_OFFSET(0x142B6330)
#define NODEGRAPH_IGRAPHNODE_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0x142B6710)
#define NODEGRAPH_IGRAPHNODE_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0x142B6670)
#define NODEGRAPH_IGRAPHNODE_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0x142B6870)
#define NODEGRAPH_IGRAPHNODE_ONNODEEND_OFFSET UNITYSDK_OFFSET(0x142B6910)
#define NODEGRAPH_IGRAPHNODE_ONNODEPAUSE_OFFSET UNITYSDK_OFFSET(0x142B6760)
#define NODEGRAPH_IGRAPHNODE_ONNODERESUME_OFFSET UNITYSDK_OFFSET(0x142B67A0)
#define NODEGRAPH_IGRAPHNODE_ONNODEUPDATE_OFFSET UNITYSDK_OFFSET(0x142B6A20)
#define NODEGRAPH_IGRAPHNODE_PAUSENODE_OFFSET UNITYSDK_OFFSET(0x142B65B0)
#define NODEGRAPH_IGRAPHNODE_RESUMENODE_OFFSET UNITYSDK_OFFSET(0x142B6610)
#define NODEGRAPH_IGRAPHNODE_SETNODEDONE_OFFSET UNITYSDK_OFFSET(0x142B6550)
#define NODEGRAPH_IGRAPHNODE_SETNODEID_OFFSET UNITYSDK_OFFSET(0x142B6380)
#define NODEGRAPH_IGRAPHNODE_SETNODESTATE_OFFSET UNITYSDK_OFFSET(0x142B6250)
#define NODEGRAPH_IGRAPHNODE_SET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x142B6360)
#define NODEGRAPH_IGRAPHNODE_SET_NODEID_OFFSET UNITYSDK_OFFSET(0x142B6310)
#define NODEGRAPH_IGRAPHNODE_SET_STATE_OFFSET UNITYSDK_OFFSET(0x142B6340)
#define NODEGRAPH_IGRAPHNODE_UPDATENODE_OFFSET UNITYSDK_OFFSET(0x142B6950)
#define NODEGRAPH_IGRAPHNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x142B6370)

namespace NodeGraph
{
	inline static constexpr unsigned int IGraphNode_TypeDefinitionIndex = 44743;

	class IGraphNode : public ::System::Object
	{
	public:
		::NodeGraph::NodeGraphBase* _nodeGraph; // 0x10
		::System::String* _NodeName_k__BackingField; // 0x18
		::NodeGraph::IGraphNode_NodeState _State_k__BackingField; // 0x20
		::System::Boolean _IsPaused_k__BackingField; // 0x24
		::System::UInt32 _NodeId_k__BackingField; // 0x28

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_IGRAPHNODE__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::String* get_NodeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_IGRAPHNODE_GET_NODENAME_OFFSET))(this);
		}

		::System::UInt32 get_GraphId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_IGRAPHNODE_GET_GRAPHID_OFFSET))(this);
		}

		::System::UInt32 get_NodeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_IGRAPHNODE_GET_NODEID_OFFSET))(this);
		}

		::System::Void set_NodeId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NODEGRAPH_IGRAPHNODE_SET_NODEID_OFFSET))(this, value);
		}

		::NodeGraph::NodeGraphBase* get_NodeGraph()
		{
			return ((::NodeGraph::NodeGraphBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_IGRAPHNODE_GET_NODEGRAPH_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState get_State()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_IGRAPHNODE_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::NodeGraph::IGraphNode_NodeState value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::IGraphNode_NodeState))((::PBYTE)hIl2Cpp + NODEGRAPH_IGRAPHNODE_SET_STATE_OFFSET))(this, value);
		}

		::System::Boolean get_IsPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_IGRAPHNODE_GET_ISPAUSED_OFFSET))(this);
		}

		::System::Void set_IsPaused(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODEGRAPH_IGRAPHNODE_SET_ISPAUSED_OFFSET))(this, value);
		}

		::System::Void SetNodeId(::System::UInt32 nodeId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NODEGRAPH_IGRAPHNODE_SETNODEID_OFFSET))(this, nodeId);
		}

		::System::Void ActiveNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_IGRAPHNODE_ACTIVENODE_OFFSET))(this);
		}

		::System::Void SetNodeState(::NodeGraph::IGraphNode_NodeState state)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::IGraphNode_NodeState))((::PBYTE)hIl2Cpp + NODEGRAPH_IGRAPHNODE_SETNODESTATE_OFFSET))(this, state);
		}

		::System::Void SetNodeDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_IGRAPHNODE_SETNODEDONE_OFFSET))(this);
		}

		::System::Void PauseNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_IGRAPHNODE_PAUSENODE_OFFSET))(this);
		}

		::System::Void ResumeNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_IGRAPHNODE_RESUMENODE_OFFSET))(this);
		}

		::System::Void OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_IGRAPHNODE_ONNODEACTIVE_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_IGRAPHNODE_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::System::Void OnNodePause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_IGRAPHNODE_ONNODEPAUSE_OFFSET))(this);
		}

		::System::Void OnNodeResume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_IGRAPHNODE_ONNODERESUME_OFFSET))(this);
		}

		::System::Void ClearNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_IGRAPHNODE_CLEARNODE_OFFSET))(this);
		}

		::System::Void OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_IGRAPHNODE_ONNODECLEAR_OFFSET))(this);
		}

		::System::Void EndNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_IGRAPHNODE_ENDNODE_OFFSET))(this);
		}

		::System::Void OnNodeEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_IGRAPHNODE_ONNODEEND_OFFSET))(this);
		}

		::System::Void UpdateNode(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_IGRAPHNODE_UPDATENODE_OFFSET))(this, deltaTime);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeUpdate(::System::Single deltaTime)
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_IGRAPHNODE_ONNODEUPDATE_OFFSET))(this, deltaTime);
		}
	};
}
