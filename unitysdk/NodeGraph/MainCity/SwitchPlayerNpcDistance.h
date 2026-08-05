#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"

namespace NodeGraph { class GraphOutputPort; }
namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NODEGRAPH_MAINCITY_SWITCHPLAYERNPCDISTANCE_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0x12D46D60)
#define NODEGRAPH_MAINCITY_SWITCHPLAYERNPCDISTANCE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x12D46BB0)
#define NODEGRAPH_MAINCITY_SWITCHPLAYERNPCDISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x12D46AE0)
#define NODEGRAPH_MAINCITY_SWITCHPLAYERNPCDISTANCE__ONREGISTERPARAM_B__5_0_OFFSET UNITYSDK_OFFSET(0x12D46FB0)
#define NODEGRAPH_MAINCITY_SWITCHPLAYERNPCDISTANCE__ONREGISTERPARAM_B__5_1_OFFSET UNITYSDK_OFFSET(0x12D46FE0)
#define NODEGRAPH_MAINCITY_SWITCHPLAYERNPCDISTANCE___BASE_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0x12D47010)
#define NODEGRAPH_MAINCITY_SWITCHPLAYERNPCDISTANCE___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x12D47020)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int SwitchPlayerNpcDistance_TypeDefinitionIndex = 67451;

	class SwitchPlayerNpcDistance : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::NodeGraph::GraphOutputPort* False; // 0x58
		::NodeGraph::GraphOutputPort* True; // 0x60
		::System::Single distance; // 0x68
		::System::Int32 npcTag; // 0x6C

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SWITCHPLAYERNPCDISTANCE__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SWITCHPLAYERNPCDISTANCE_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::System::Void OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SWITCHPLAYERNPCDISTANCE_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void _OnRegisterParam_b__5_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SWITCHPLAYERNPCDISTANCE__ONREGISTERPARAM_B__5_0_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__5_1(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SWITCHPLAYERNPCDISTANCE__ONREGISTERPARAM_B__5_1_OFFSET))(this, node);
		}

		::System::Void __base_OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SWITCHPLAYERNPCDISTANCE___BASE_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SWITCHPLAYERNPCDISTANCE___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
