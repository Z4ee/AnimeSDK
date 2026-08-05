#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"

namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NODEGRAPH_MAINCITY_HIDEMAINCITYUI_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0xE960860)
#define NODEGRAPH_MAINCITY_HIDEMAINCITYUI_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0xE960F50)
#define NODEGRAPH_MAINCITY_HIDEMAINCITYUI_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0xE960730)
#define NODEGRAPH_MAINCITY_HIDEMAINCITYUI__CTOR_OFFSET UNITYSDK_OFFSET(0xE960580)
#define NODEGRAPH_MAINCITY_HIDEMAINCITYUI__ONREGISTERPARAM_B__2_0_OFFSET UNITYSDK_OFFSET(0xE961440)
#define NODEGRAPH_MAINCITY_HIDEMAINCITYUI___BASE_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0xE961470)
#define NODEGRAPH_MAINCITY_HIDEMAINCITYUI___BASE_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0xE961480)
#define NODEGRAPH_MAINCITY_HIDEMAINCITYUI___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0xE961510)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int HideMainCityUI_TypeDefinitionIndex = 59800;

	class HideMainCityUI : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::System::Boolean isHideUi; // 0x58

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_HIDEMAINCITYUI__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_HIDEMAINCITYUI_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::System::Void OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_HIDEMAINCITYUI_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_HIDEMAINCITYUI_ONNODECLEAR_OFFSET))(this);
		}

		::System::Void _OnRegisterParam_b__2_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_HIDEMAINCITYUI__ONREGISTERPARAM_B__2_0_OFFSET))(this, node);
		}

		::System::Void __base_OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_HIDEMAINCITYUI___BASE_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_HIDEMAINCITYUI___BASE_ONNODECLEAR_OFFSET))(this);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_HIDEMAINCITYUI___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
