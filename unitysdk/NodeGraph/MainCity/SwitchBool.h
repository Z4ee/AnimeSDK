#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"

namespace NodeGraph { class GraphInputValuePort; }
namespace NodeGraph { class GraphOutputPort; }
namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NODEGRAPH_MAINCITY_SWITCHBOOL_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0x11D9C320)
#define NODEGRAPH_MAINCITY_SWITCHBOOL_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x11D9C170)
#define NODEGRAPH_MAINCITY_SWITCHBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x11D9B520)
#define NODEGRAPH_MAINCITY_SWITCHBOOL__ONREGISTERPARAM_B__10_0_OFFSET UNITYSDK_OFFSET(0x11D9C510)
#define NODEGRAPH_MAINCITY_SWITCHBOOL__ONREGISTERPARAM_B__10_1_OFFSET UNITYSDK_OFFSET(0x11D9C540)
#define NODEGRAPH_MAINCITY_SWITCHBOOL___BASE_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0x11D9C570)
#define NODEGRAPH_MAINCITY_SWITCHBOOL___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x11D9C580)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int SwitchBool_TypeDefinitionIndex = 39556;

	class SwitchBool : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::NodeGraph::GraphOutputPort* Index2; // 0x58
		::NodeGraph::GraphInputValuePort* IndexValuePort; // 0x60
		::NodeGraph::GraphOutputPort* Index3; // 0x68
		::NodeGraph::GraphOutputPort* True; // 0x70
		::NodeGraph::GraphOutputPort* False; // 0x78
		::NodeGraph::GraphInputValuePort* ValuePort; // 0x80
		::NodeGraph::GraphOutputPort* Index1; // 0x88
		::System::Boolean IndexMode; // 0x90
		::System::Boolean Value; // 0x91

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SWITCHBOOL__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SWITCHBOOL_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::System::Void OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SWITCHBOOL_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void _OnRegisterParam_b__10_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SWITCHBOOL__ONREGISTERPARAM_B__10_0_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__10_1(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SWITCHBOOL__ONREGISTERPARAM_B__10_1_OFFSET))(this, node);
		}

		::System::Void __base_OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SWITCHBOOL___BASE_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SWITCHBOOL___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
