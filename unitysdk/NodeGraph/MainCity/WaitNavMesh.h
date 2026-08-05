#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeBase.h"
#include "unitysdk/NodeGraph/IGraphNode_NodeState.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NODEGRAPH_MAINCITY_WAITNAVMESH_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0x142BC100)
#define NODEGRAPH_MAINCITY_WAITNAVMESH_ONNODEUPDATE_OFFSET UNITYSDK_OFFSET(0x142BC190)
#define NODEGRAPH_MAINCITY_WAITNAVMESH_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x142BBF50)
#define NODEGRAPH_MAINCITY_WAITNAVMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x142BBDD0)
#define NODEGRAPH_MAINCITY_WAITNAVMESH__ONREGISTERPARAM_B__4_0_OFFSET UNITYSDK_OFFSET(0x142BC6B0)
#define NODEGRAPH_MAINCITY_WAITNAVMESH__ONREGISTERPARAM_B__4_1_OFFSET UNITYSDK_OFFSET(0x142BC6E0)
#define NODEGRAPH_MAINCITY_WAITNAVMESH___BASE_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0x142BC710)
#define NODEGRAPH_MAINCITY_WAITNAVMESH___BASE_ONNODEUPDATE_OFFSET UNITYSDK_OFFSET(0x142BC760)
#define NODEGRAPH_MAINCITY_WAITNAVMESH___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x142BC7C0)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int WaitNavMesh_TypeDefinitionIndex = 67810;

	class WaitNavMesh : public ::NodeGraph::GraphNodeBase
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* cachedDataPath; // 0x58
		::Il2CppArray<::UnityEngine::Vector3>* navMeshPathCorners; // 0x60
		::System::Single seconds; // 0x68
		::System::Int32 npcTag; // 0x6C
		::System::Single _timer; // 0x70

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraph)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_WAITNAVMESH__CTOR_OFFSET))(this, nodeGraph);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_WAITNAVMESH_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_WAITNAVMESH_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeUpdate(::System::Single deltaTime)
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_WAITNAVMESH_ONNODEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void _OnRegisterParam_b__4_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_WAITNAVMESH__ONREGISTERPARAM_B__4_0_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__4_1(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_WAITNAVMESH__ONREGISTERPARAM_B__4_1_OFFSET))(this, node);
		}

		::NodeGraph::IGraphNode_NodeState __base_OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_WAITNAVMESH___BASE_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState __base_OnNodeUpdate(::System::Single P0)
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_WAITNAVMESH___BASE_ONNODEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_WAITNAVMESH___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
