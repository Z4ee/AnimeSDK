#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/IGraphNode_NodeState.h"
#include "unitysdk/NodeGraph/MainCity/MoveTo.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NODEGRAPH_MAINCITY_ROTATETOLOCALAVATAR_GETTARGETFORWARD_OFFSET UNITYSDK_OFFSET(0x161449C0)
#define NODEGRAPH_MAINCITY_ROTATETOLOCALAVATAR_GETTARGETPOS_OFFSET UNITYSDK_OFFSET(0x16144720)
#define NODEGRAPH_MAINCITY_ROTATETOLOCALAVATAR_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0x16144410)
#define NODEGRAPH_MAINCITY_ROTATETOLOCALAVATAR_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x16144290)
#define NODEGRAPH_MAINCITY_ROTATETOLOCALAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x16144280)
#define NODEGRAPH_MAINCITY_ROTATETOLOCALAVATAR__ONREGISTERPARAM_B__3_0_OFFSET UNITYSDK_OFFSET(0x16144D20)
#define NODEGRAPH_MAINCITY_ROTATETOLOCALAVATAR__ONREGISTERPARAM_B__3_1_OFFSET UNITYSDK_OFFSET(0x16144D50)
#define NODEGRAPH_MAINCITY_ROTATETOLOCALAVATAR___BASE_GETTARGETFORWARD_OFFSET UNITYSDK_OFFSET(0x16144D80)
#define NODEGRAPH_MAINCITY_ROTATETOLOCALAVATAR___BASE_GETTARGETPOS_OFFSET UNITYSDK_OFFSET(0x16144DB0)
#define NODEGRAPH_MAINCITY_ROTATETOLOCALAVATAR___BASE_ONNODEACTIVEWITHSTATE_OFFSET UNITYSDK_OFFSET(0x16144DE0)
#define NODEGRAPH_MAINCITY_ROTATETOLOCALAVATAR___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x16144DF0)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int RotateToLocalAvatar_TypeDefinitionIndex = 66207;

	class RotateToLocalAvatar : public ::NodeGraph::MainCity::MoveTo
	{
	public:
		::System::Boolean invert; // 0xC0
		::System::Single minDis; // 0xC4

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ROTATETOLOCALAVATAR__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ROTATETOLOCALAVATAR_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::NodeGraph::IGraphNode_NodeState OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ROTATETOLOCALAVATAR_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetTargetPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ROTATETOLOCALAVATAR_GETTARGETPOS_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetTargetForward()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ROTATETOLOCALAVATAR_GETTARGETFORWARD_OFFSET))(this);
		}

		::System::Void _OnRegisterParam_b__3_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ROTATETOLOCALAVATAR__ONREGISTERPARAM_B__3_0_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__3_1(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ROTATETOLOCALAVATAR__ONREGISTERPARAM_B__3_1_OFFSET))(this, node);
		}

		::UnityEngine::Vector3 __base_GetTargetForward()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ROTATETOLOCALAVATAR___BASE_GETTARGETFORWARD_OFFSET))(this);
		}

		::UnityEngine::Vector3 __base_GetTargetPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ROTATETOLOCALAVATAR___BASE_GETTARGETPOS_OFFSET))(this);
		}

		::NodeGraph::IGraphNode_NodeState __base_OnNodeActiveWithState()
		{
			return ((::NodeGraph::IGraphNode_NodeState(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ROTATETOLOCALAVATAR___BASE_ONNODEACTIVEWITHSTATE_OFFSET))(this);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_ROTATETOLOCALAVATAR___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
