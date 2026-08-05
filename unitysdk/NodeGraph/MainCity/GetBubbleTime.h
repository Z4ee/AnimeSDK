#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"

namespace MoleMole::GalGame { class GalBubbleAction; }
namespace MoleMole::GalGame { class GalBubbleStoryNode; }
namespace MoleMole::GalGame { class GalScript; }
namespace NodeGraph { class GraphOutputValuePort; }
namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NODEGRAPH_MAINCITY_GETBUBBLETIME_GETGALCONFIG_OFFSET UNITYSDK_OFFSET(0x1195CAB0)
#define NODEGRAPH_MAINCITY_GETBUBBLETIME_GETPERFORMCHATSTORYNODELIST_OFFSET UNITYSDK_OFFSET(0x1195D210)
#define NODEGRAPH_MAINCITY_GETBUBBLETIME_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0x1195C750)
#define NODEGRAPH_MAINCITY_GETBUBBLETIME_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x1195C620)
#define NODEGRAPH_MAINCITY_GETBUBBLETIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1195C4C0)
#define NODEGRAPH_MAINCITY_GETBUBBLETIME__ONREGISTERPARAM_B__3_0_OFFSET UNITYSDK_OFFSET(0x1195D7B0)
#define NODEGRAPH_MAINCITY_GETBUBBLETIME___BASE_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0x1195D7E0)
#define NODEGRAPH_MAINCITY_GETBUBBLETIME___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x1195D7F0)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int GetBubbleTime_TypeDefinitionIndex = 57917;

	class GetBubbleTime : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::NodeGraph::GraphOutputValuePort* _time; // 0x58
		::System::Int32 bubbleId; // 0x60

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_GETBUBBLETIME__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_GETBUBBLETIME_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::System::Void OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_GETBUBBLETIME_ONNODEACTIVE_OFFSET))(this);
		}

		::MoleMole::GalGame::GalBubbleAction* GetGalConfig(::MoleMole::GalGame::GalScript* script)
		{
			return ((::MoleMole::GalGame::GalBubbleAction*(*)(::PVOID, ::MoleMole::GalGame::GalScript*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_GETBUBBLETIME_GETGALCONFIG_OFFSET))(this, script);
		}

		::System::Collections::Generic::List_1<::MoleMole::GalGame::GalBubbleStoryNode*>* GetPerformChatStoryNodeList(::MoleMole::GalGame::GalScript* script)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::GalGame::GalBubbleStoryNode*>*(*)(::PVOID, ::MoleMole::GalGame::GalScript*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_GETBUBBLETIME_GETPERFORMCHATSTORYNODELIST_OFFSET))(this, script);
		}

		::System::Void _OnRegisterParam_b__3_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_GETBUBBLETIME__ONREGISTERPARAM_B__3_0_OFFSET))(this, node);
		}

		::System::Void __base_OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_GETBUBBLETIME___BASE_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_GETBUBBLETIME___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
