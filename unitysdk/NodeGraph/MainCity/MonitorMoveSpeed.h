#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

namespace MoleMole::Battle { class Entity; }
namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NODEGRAPH_MAINCITY_MONITORMOVESPEED_ONANIMATORSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xFB62F00)
#define NODEGRAPH_MAINCITY_MONITORMOVESPEED_ONLOCALAVATARANIMATORSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xFB62880)
#define NODEGRAPH_MAINCITY_MONITORMOVESPEED_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0xFB622D0)
#define NODEGRAPH_MAINCITY_MONITORMOVESPEED_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0xFB63470)
#define NODEGRAPH_MAINCITY_MONITORMOVESPEED_ONNODEEND_OFFSET UNITYSDK_OFFSET(0xFB634E0)
#define NODEGRAPH_MAINCITY_MONITORMOVESPEED_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0xFB621A0)
#define NODEGRAPH_MAINCITY_MONITORMOVESPEED__CTOR_OFFSET UNITYSDK_OFFSET(0xFB61FF0)
#define NODEGRAPH_MAINCITY_MONITORMOVESPEED__ONREGISTERPARAM_B__3_0_OFFSET UNITYSDK_OFFSET(0xFB63550)
#define NODEGRAPH_MAINCITY_MONITORMOVESPEED___BASE_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0xFB63580)
#define NODEGRAPH_MAINCITY_MONITORMOVESPEED___BASE_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0xFB63590)
#define NODEGRAPH_MAINCITY_MONITORMOVESPEED___BASE_ONNODEEND_OFFSET UNITYSDK_OFFSET(0xFB63620)
#define NODEGRAPH_MAINCITY_MONITORMOVESPEED___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0xFB636B0)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int MonitorMoveSpeed_TypeDefinitionIndex = 45670;

	class MonitorMoveSpeed : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::MoleMole::Battle::Entity* _entity; // 0x58
		::System::Int32 npcTag; // 0x60

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MONITORMOVESPEED__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MONITORMOVESPEED_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::System::Void OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MONITORMOVESPEED_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void OnLocalAvatarAnimatorStateChanged(::UnityEngine::AnimatorStateInfo arg1, ::UnityEngine::AnimatorStateInfo to, ::System::Int32 arg3, ::System::UInt32 arg4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MONITORMOVESPEED_ONLOCALAVATARANIMATORSTATECHANGED_OFFSET))(this, arg1, to, arg3, arg4);
		}

		::System::Void OnAnimatorStateChanged(::UnityEngine::AnimatorStateInfo arg1, ::UnityEngine::AnimatorStateInfo to, ::System::Int32 arg3, ::System::UInt32 arg4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MONITORMOVESPEED_ONANIMATORSTATECHANGED_OFFSET))(this, arg1, to, arg3, arg4);
		}

		::System::Void OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MONITORMOVESPEED_ONNODECLEAR_OFFSET))(this);
		}

		::System::Void OnNodeEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MONITORMOVESPEED_ONNODEEND_OFFSET))(this);
		}

		::System::Void _OnRegisterParam_b__3_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MONITORMOVESPEED__ONREGISTERPARAM_B__3_0_OFFSET))(this, node);
		}

		::System::Void __base_OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MONITORMOVESPEED___BASE_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MONITORMOVESPEED___BASE_ONNODECLEAR_OFFSET))(this);
		}

		::System::Void __base_OnNodeEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MONITORMOVESPEED___BASE_ONNODEEND_OFFSET))(this);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_MONITORMOVESPEED___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
