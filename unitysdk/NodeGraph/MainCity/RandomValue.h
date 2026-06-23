#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"

namespace NodeGraph { class GraphOutputValuePort; }
namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NODEGRAPH_MAINCITY_RANDOMVALUE_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0x1274A8A0)
#define NODEGRAPH_MAINCITY_RANDOMVALUE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x1274A770)
#define NODEGRAPH_MAINCITY_RANDOMVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1274A610)
#define NODEGRAPH_MAINCITY_RANDOMVALUE__ONREGISTERPARAM_B__3_0_OFFSET UNITYSDK_OFFSET(0x1274AA90)
#define NODEGRAPH_MAINCITY_RANDOMVALUE___BASE_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0x1274AE60)
#define NODEGRAPH_MAINCITY_RANDOMVALUE___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x1274AE70)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int RandomValue_TypeDefinitionIndex = 41522;

	class RandomValue : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::NodeGraph::GraphOutputValuePort* _result; // 0x58
		::System::Collections::Generic::List_1<::System::Int32>* _values; // 0x60

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_RANDOMVALUE__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_RANDOMVALUE_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::System::Void OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_RANDOMVALUE_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void _OnRegisterParam_b__3_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_RANDOMVALUE__ONREGISTERPARAM_B__3_0_OFFSET))(this, node);
		}

		::System::Void __base_OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_RANDOMVALUE___BASE_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_RANDOMVALUE___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
