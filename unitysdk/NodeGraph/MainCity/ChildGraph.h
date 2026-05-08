#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"

namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NODEGRAPH_MAINCITY_CHILDGRAPH_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0xFB61700)
#define NODEGRAPH_MAINCITY_CHILDGRAPH_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0xFB61930)
#define NODEGRAPH_MAINCITY_CHILDGRAPH_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0xFB61610)
#define NODEGRAPH_MAINCITY_CHILDGRAPH__CTOR_OFFSET UNITYSDK_OFFSET(0xFB614C0)
#define NODEGRAPH_MAINCITY_CHILDGRAPH__ONREGISTERPARAM_B__3_0_OFFSET UNITYSDK_OFFSET(0xFB61AF0)
#define NODEGRAPH_MAINCITY_CHILDGRAPH___BASE_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0xFB61EC0)
#define NODEGRAPH_MAINCITY_CHILDGRAPH___BASE_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0xFB61ED0)
#define NODEGRAPH_MAINCITY_CHILDGRAPH___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0xFB61F60)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int ChildGraph_TypeDefinitionIndex = 67363;

	class ChildGraph : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::System::Collections::Generic::List_1<::NodeGraph::NodeGraphBase*>* graphs; // 0x58
		::System::Collections::Generic::List_1<::System::Int32>* graphIds; // 0x60

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHILDGRAPH__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHILDGRAPH_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::System::Void OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHILDGRAPH_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHILDGRAPH_ONNODECLEAR_OFFSET))(this);
		}

		::System::Void _OnRegisterParam_b__3_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHILDGRAPH__ONREGISTERPARAM_B__3_0_OFFSET))(this, node);
		}

		::System::Void __base_OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHILDGRAPH___BASE_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHILDGRAPH___BASE_ONNODECLEAR_OFFSET))(this);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_CHILDGRAPH___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
