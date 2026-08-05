#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"

namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NODEGRAPH_MAINCITY_SETFORCERUN_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0x157CDB20)
#define NODEGRAPH_MAINCITY_SETFORCERUN_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x157CD900)
#define NODEGRAPH_MAINCITY_SETFORCERUN__CTOR_OFFSET UNITYSDK_OFFSET(0x157CD750)
#define NODEGRAPH_MAINCITY_SETFORCERUN__ONREGISTERPARAM_B__4_0_OFFSET UNITYSDK_OFFSET(0x157CDED0)
#define NODEGRAPH_MAINCITY_SETFORCERUN__ONREGISTERPARAM_B__4_1_OFFSET UNITYSDK_OFFSET(0x157CDF00)
#define NODEGRAPH_MAINCITY_SETFORCERUN__ONREGISTERPARAM_B__4_2_OFFSET UNITYSDK_OFFSET(0x157CDF30)
#define NODEGRAPH_MAINCITY_SETFORCERUN___BASE_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0x157CDF60)
#define NODEGRAPH_MAINCITY_SETFORCERUN___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x157CDF70)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int SetForceRun_TypeDefinitionIndex = 74657;

	class SetForceRun : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::System::Boolean Disable; // 0x58
		::System::Boolean ForceRun; // 0x59
		::System::Int32 NpcTag; // 0x5C

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETFORCERUN__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETFORCERUN_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::System::Void OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETFORCERUN_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void _OnRegisterParam_b__4_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETFORCERUN__ONREGISTERPARAM_B__4_0_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__4_1(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETFORCERUN__ONREGISTERPARAM_B__4_1_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__4_2(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETFORCERUN__ONREGISTERPARAM_B__4_2_OFFSET))(this, node);
		}

		::System::Void __base_OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETFORCERUN___BASE_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETFORCERUN___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
