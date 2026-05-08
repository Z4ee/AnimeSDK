#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/BTNodeNested_1.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::BehaviourTrees { class BehaviourTree; }
namespace NodeCanvas::Framework { class BBParameter; }
namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace UnityEngine { class Component; }

#define NODECANVAS_BEHAVIOURTREES_SUBTREE_GET_SUBGRAPHPARAMETER_OFFSET UNITYSDK_OFFSET(0x1B32C410)
#define NODECANVAS_BEHAVIOURTREES_SUBTREE_GET_SUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1B32C350)
#define NODECANVAS_BEHAVIOURTREES_SUBTREE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1B32C420)
#define NODECANVAS_BEHAVIOURTREES_SUBTREE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1B32C6D0)
#define NODECANVAS_BEHAVIOURTREES_SUBTREE_SET_SUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1B32C3B0)
#define NODECANVAS_BEHAVIOURTREES_SUBTREE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B32C830)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int SubTree_TypeDefinitionIndex = 27811;

	class SubTree : public ::NodeCanvas::BehaviourTrees::BTNodeNested_1<::NodeCanvas::BehaviourTrees::BehaviourTree*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::NodeCanvas::BehaviourTrees::BehaviourTree*>* _subTree; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_SUBTREE__CTOR_OFFSET))(this);
		}

		::NodeCanvas::BehaviourTrees::BehaviourTree* get_subGraph()
		{
			return ((::NodeCanvas::BehaviourTrees::BehaviourTree*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_SUBTREE_GET_SUBGRAPH_OFFSET))(this);
		}

		::System::Void set_subGraph(::NodeCanvas::BehaviourTrees::BehaviourTree* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::BehaviourTrees::BehaviourTree*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_SUBTREE_SET_SUBGRAPH_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::BBParameter* get_subGraphParameter()
		{
			return ((::NodeCanvas::Framework::BBParameter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_SUBTREE_GET_SUBGRAPHPARAMETER_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_SUBTREE_ONEXECUTE_OFFSET))(this, agent, blackboard);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_SUBTREE_ONRESET_OFFSET))(this);
		}
	};
}
