#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"
#include "unitysdk/NodeGraph/IGraphNode_NodeState.h"

namespace NodeGraph { class GraphInputPort; }
namespace NodeGraph { class GraphOutputPort; }
namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NODEGRAPH_MAINCITY_WAITALL_CLEARDIC_OFFSET UNITYSDK_OFFSET(0xF621200)
#define NODEGRAPH_MAINCITY_WAITALL_ONACTIVEPORT_OFFSET UNITYSDK_OFFSET(0xF620FB0)
#define NODEGRAPH_MAINCITY_WAITALL_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0xF620F60)
#define NODEGRAPH_MAINCITY_WAITALL_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0xF6215A0)
#define NODEGRAPH_MAINCITY_WAITALL_ONNODEEND_OFFSET UNITYSDK_OFFSET(0xF621610)
#define NODEGRAPH_MAINCITY_WAITALL_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0xF620E30)
#define NODEGRAPH_MAINCITY_WAITALL__CTOR_OFFSET UNITYSDK_OFFSET(0xF620DE0)
#define NODEGRAPH_MAINCITY_WAITALL__ONREGISTERPARAM_B__3_0_OFFSET UNITYSDK_OFFSET(0xF621680)
#define NODEGRAPH_MAINCITY_WAITALL___BASE_ONACTIVEPORT_OFFSET UNITYSDK_OFFSET(0xF621A70)
#define NODEGRAPH_MAINCITY_WAITALL___BASE_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0xF621B00)
#define NODEGRAPH_MAINCITY_WAITALL___BASE_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0xF621BA0)
#define NODEGRAPH_MAINCITY_WAITALL___BASE_ONNODEEND_OFFSET UNITYSDK_OFFSET(0xF621C30)
#define NODEGRAPH_MAINCITY_WAITALL___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0xF621CC0)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int WaitAll_TypeDefinitionIndex = 56803;

	class WaitAll : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::NodeGraph::GraphOutputPort* _onAllFinish; // 0x58
		::System::Collections::Generic::Dictionary_2<::NodeGraph::GraphInputPort*, ::System::Boolean>* _inputPorts; // 0x60

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_WAITALL__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_WAITALL_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_WAITALL_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::System::Void OnActivePort(::NodeGraph::GraphInputPort* port)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::GraphInputPort*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_WAITALL_ONACTIVEPORT_OFFSET))(this, port);
		}

		::System::Void ClearDic()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_WAITALL_CLEARDIC_OFFSET))(this);
		}

		::System::Void OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_WAITALL_ONNODECLEAR_OFFSET))(this);
		}

		::System::Void OnNodeEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_WAITALL_ONNODEEND_OFFSET))(this);
		}

		::System::Void _OnRegisterParam_b__3_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_WAITALL__ONREGISTERPARAM_B__3_0_OFFSET))(this, node);
		}

		::System::Void __base_OnActivePort(::NodeGraph::GraphInputPort* P0)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::GraphInputPort*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_WAITALL___BASE_ONACTIVEPORT_OFFSET))(this, P0);
		}

		::NodeGraph::IGraphNode_NodeState __base_OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_WAITALL___BASE_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::System::Void __base_OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_WAITALL___BASE_ONNODECLEAR_OFFSET))(this);
		}

		::System::Void __base_OnNodeEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_WAITALL___BASE_ONNODEEND_OFFSET))(this);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_WAITALL___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
