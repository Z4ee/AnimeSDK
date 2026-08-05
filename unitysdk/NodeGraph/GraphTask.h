#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeGraph { class NodeGraphBase; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NODEGRAPH_GRAPHTASK_GET_GRAPH_OFFSET UNITYSDK_OFFSET(0xF61B370)
#define NODEGRAPH_GRAPHTASK_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xF61B3D0)
#define NODEGRAPH_GRAPHTASK_ONREGISTERPARAM_OFFSET UNITYSDK_OFFSET(0xF61B1F0)
#define NODEGRAPH_GRAPHTASK_ONSTART_OFFSET UNITYSDK_OFFSET(0xF61B390)
#define NODEGRAPH_GRAPHTASK_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xF61B410)
#define NODEGRAPH_GRAPHTASK_SETPARAM_OFFSET UNITYSDK_OFFSET(0xF61B240)
#define NODEGRAPH_GRAPHTASK_SET_GRAPH_OFFSET UNITYSDK_OFFSET(0xF61B380)
#define NODEGRAPH_GRAPHTASK__CTOR_OFFSET UNITYSDK_OFFSET(0xF61B450)

namespace NodeGraph
{
	inline static constexpr unsigned int GraphTask_TypeDefinitionIndex = 82061;

	class GraphTask : public ::System::Object
	{
	public:
		::NodeGraph::NodeGraphBase* _Graph_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHTASK__CTOR_OFFSET))(this);
		}

		::System::Void OnRegisterParam(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>* _paramRegister)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_1<::SimpleJSON::JSONNode*>*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHTASK_ONREGISTERPARAM_OFFSET))(this, _paramRegister);
		}

		::System::Void SetParam(::System::String* key, ::SimpleJSON::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHTASK_SETPARAM_OFFSET))(this, key, value);
		}

		::NodeGraph::NodeGraphBase* get_Graph()
		{
			return ((::NodeGraph::NodeGraphBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHTASK_GET_GRAPH_OFFSET))(this);
		}

		::System::Void set_Graph(::NodeGraph::NodeGraphBase* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::NodeGraphBase*))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHTASK_SET_GRAPH_OFFSET))(this, value);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHTASK_ONSTART_OFFSET))(this);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHTASK_ONCLEAR_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_GRAPHTASK_ONUPDATE_OFFSET))(this);
		}
	};
}
