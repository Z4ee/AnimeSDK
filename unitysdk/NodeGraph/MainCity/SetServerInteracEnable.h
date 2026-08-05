#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphNodeFlow.h"

namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NODEGRAPH_MAINCITY_SETSERVERINTERACENABLE_GETUID_OFFSET UNITYSDK_OFFSET(0xE58F3C0)
#define NODEGRAPH_MAINCITY_SETSERVERINTERACENABLE_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0xE58F620)
#define NODEGRAPH_MAINCITY_SETSERVERINTERACENABLE_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0xE58FB10)
#define NODEGRAPH_MAINCITY_SETSERVERINTERACENABLE_ONNODEDONE_OFFSET UNITYSDK_OFFSET(0xE58F8A0)
#define NODEGRAPH_MAINCITY_SETSERVERINTERACENABLE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0xE58F1A0)
#define NODEGRAPH_MAINCITY_SETSERVERINTERACENABLE__CTOR_OFFSET UNITYSDK_OFFSET(0xE58EFF0)
#define NODEGRAPH_MAINCITY_SETSERVERINTERACENABLE__ONREGISTERPARAM_B__4_0_OFFSET UNITYSDK_OFFSET(0xE58FDC0)
#define NODEGRAPH_MAINCITY_SETSERVERINTERACENABLE__ONREGISTERPARAM_B__4_1_OFFSET UNITYSDK_OFFSET(0xE58FDF0)
#define NODEGRAPH_MAINCITY_SETSERVERINTERACENABLE__ONREGISTERPARAM_B__4_2_OFFSET UNITYSDK_OFFSET(0xE58FE20)
#define NODEGRAPH_MAINCITY_SETSERVERINTERACENABLE___BASE_ONNODEACTIVE_OFFSET UNITYSDK_OFFSET(0xE58FE50)
#define NODEGRAPH_MAINCITY_SETSERVERINTERACENABLE___BASE_ONNODECLEAR_OFFSET UNITYSDK_OFFSET(0xE58FE60)
#define NODEGRAPH_MAINCITY_SETSERVERINTERACENABLE___BASE_ONNODEDONE_OFFSET UNITYSDK_OFFSET(0xE58FEF0)
#define NODEGRAPH_MAINCITY_SETSERVERINTERACENABLE___BASE_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0xE58FF00)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int SetServerInteracEnable_TypeDefinitionIndex = 40823;

	class SetServerInteracEnable : public ::NodeGraph::GraphNodeFlow
	{
	public:
		::System::Int32 interactId; // 0x58
		::System::Boolean enable; // 0x5C
		::System::Int32 targetNpcTag; // 0x60

		::System::Void _ctor(::NodeGraph::NodeGraphBase* nodeGraphBase)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETSERVERINTERACENABLE__CTOR_OFFSET))(this, nodeGraphBase);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETSERVERINTERACENABLE_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::System::UInt64 GetUid()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETSERVERINTERACENABLE_GETUID_OFFSET))(this);
		}

		::System::Void OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETSERVERINTERACENABLE_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void OnNodeDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETSERVERINTERACENABLE_ONNODEDONE_OFFSET))(this);
		}

		::System::Void OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETSERVERINTERACENABLE_ONNODECLEAR_OFFSET))(this);
		}

		::System::Void _OnRegisterParam_b__4_0(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETSERVERINTERACENABLE__ONREGISTERPARAM_B__4_0_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__4_1(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETSERVERINTERACENABLE__ONREGISTERPARAM_B__4_1_OFFSET))(this, node);
		}

		::System::Void _OnRegisterParam_b__4_2(::SimpleJSON::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETSERVERINTERACENABLE__ONREGISTERPARAM_B__4_2_OFFSET))(this, node);
		}

		::System::Void __base_OnNodeActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETSERVERINTERACENABLE___BASE_ONNODEACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnNodeClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETSERVERINTERACENABLE___BASE_ONNODECLEAR_OFFSET))(this);
		}

		::System::Void __base_OnNodeDone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETSERVERINTERACENABLE___BASE_ONNODEDONE_OFFSET))(this);
		}

		::System::Void __base_OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_SETSERVERINTERACENABLE___BASE_ONREGISTERPARAM_OFFSET))(this, P0);
		}
	};
}
