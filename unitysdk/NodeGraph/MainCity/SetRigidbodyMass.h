#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"

namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NODEGRAPH_MAINCITY_SETRIGIDBODYMASS_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0x17FAF6D0)
#define NODEGRAPH_MAINCITY_SETRIGIDBODYMASS_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0x17FAF8E0)
#define NODEGRAPH_MAINCITY_SETRIGIDBODYMASS_ONNODEEND_OFFSET UNITYSDK_OFFSET(0x17FAFB70)
#define NODEGRAPH_MAINCITY_SETRIGIDBODYMASS_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x17FAF520)
#define NODEGRAPH_MAINCITY_SETRIGIDBODYMASS__CTOR_OFFSET UNITYSDK_OFFSET(0x17FAF370)
#define NODEGRAPH_MAINCITY_SETRIGIDBODYMASS__ONREGISTERPARAM_B__3_0_OFFSET UNITYSDK_OFFSET(0x17FAFD70)
#define NODEGRAPH_MAINCITY_SETRIGIDBODYMASS__ONREGISTERPARAM_B__3_1_OFFSET UNITYSDK_OFFSET(0x17FAFDA0)
#define NODEGRAPH_MAINCITY_SETRIGIDBODYMASS___BASE_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0x17FAFDD0)
#define NODEGRAPH_MAINCITY_SETRIGIDBODYMASS___BASE_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0x17FAFDE0)
#define NODEGRAPH_MAINCITY_SETRIGIDBODYMASS___BASE_ONNODEEND_OFFSET UNITYSDK_OFFSET(0x17FAFE70)
#define NODEGRAPH_MAINCITY_SETRIGIDBODYMASS___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0x17FAFF00)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int SetRigidbodyMass_TypeDefinitionIndex = 45300;

	class SetRigidbodyMass : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::System::Int32 targetNpcTag; // 0x58
		::System::Single setMass; // 0x5C

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETRIGIDBODYMASS__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETRIGIDBODYMASS_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::System::Void OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETRIGIDBODYMASS_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETRIGIDBODYMASS_ONNODECLEAR_OFFSET))(this);
		}

		::System::Void OnNodeEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETRIGIDBODYMASS_ONNODEEND_OFFSET))(this);
		}

		::System::Void _OnRegisterParam_b__3_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETRIGIDBODYMASS__ONREGISTERPARAM_B__3_0_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__3_1(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETRIGIDBODYMASS__ONREGISTERPARAM_B__3_1_OFFSET))(this, node);
		}

		::System::Void __base_OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETRIGIDBODYMASS___BASE_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETRIGIDBODYMASS___BASE_ONNODECLEAR_OFFSET))(this);
		}

		::System::Void __base_OnNodeEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETRIGIDBODYMASS___BASE_ONNODEEND_OFFSET))(this);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETRIGIDBODYMASS___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
