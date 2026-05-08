#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"

namespace NodeGraph { class GraphOutputValuePort; }
namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NODEGRAPH_MAINCITY_GETPARTNERDATECONFIG_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0xF4FD0F0)
#define NODEGRAPH_MAINCITY_GETPARTNERDATECONFIG_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0xF4FD080)
#define NODEGRAPH_MAINCITY_GETPARTNERDATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xF4FCF00)
#define NODEGRAPH_MAINCITY_GETPARTNERDATECONFIG___BASE_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0xF4FD620)
#define NODEGRAPH_MAINCITY_GETPARTNERDATECONFIG___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0xF4FD630)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int GetPartnerDateConfig_TypeDefinitionIndex = 44082;

	class GetPartnerDateConfig : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::NodeGraph::GraphOutputValuePort* _centerHeight; // 0x58
		::NodeGraph::GraphOutputValuePort* _fairyList; // 0x60
		::NodeGraph::GraphOutputValuePort* _hasTurnAni; // 0x68

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_GETPARTNERDATECONFIG__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_GETPARTNERDATECONFIG_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::System::Void OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_GETPARTNERDATECONFIG_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_GETPARTNERDATECONFIG___BASE_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_GETPARTNERDATECONFIG___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
