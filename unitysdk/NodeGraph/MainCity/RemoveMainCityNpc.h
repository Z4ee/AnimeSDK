#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"

namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NODEGRAPH_MAINCITY_REMOVEMAINCITYNPC_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0x102D05B0)
#define NODEGRAPH_MAINCITY_REMOVEMAINCITYNPC_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x102D0480)
#define NODEGRAPH_MAINCITY_REMOVEMAINCITYNPC__CTOR_OFFSET UNITYSDK_OFFSET(0x102D02D0)
#define NODEGRAPH_MAINCITY_REMOVEMAINCITYNPC__ONREGISTERPARAM_B__2_0_OFFSET UNITYSDK_OFFSET(0x102D07A0)
#define NODEGRAPH_MAINCITY_REMOVEMAINCITYNPC___BASE_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0x102D07D0)
#define NODEGRAPH_MAINCITY_REMOVEMAINCITYNPC___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x102D07E0)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int RemoveMainCityNpc_TypeDefinitionIndex = 51979;

	class RemoveMainCityNpc : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::System::Int32 mainCityNpcTag; // 0x58

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_REMOVEMAINCITYNPC__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_REMOVEMAINCITYNPC_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::System::Void OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_REMOVEMAINCITYNPC_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void _OnRegisterParam_b__2_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_REMOVEMAINCITYNPC__ONREGISTERPARAM_B__2_0_OFFSET))(this, node);
		}

		::System::Void __base_OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_REMOVEMAINCITYNPC___BASE_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_REMOVEMAINCITYNPC___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
