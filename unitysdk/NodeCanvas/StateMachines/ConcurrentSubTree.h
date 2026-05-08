#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/StateMachines/FSMNodeNested_1.h"

namespace NodeCanvas::BehaviourTrees { class BehaviourTree; }
namespace NodeCanvas::Framework { class BBParameter; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_STATEMACHINES_CONCURRENTSUBTREE_GET_ALLOWASPRIME_OFFSET UNITYSDK_OFFSET(0x1AF32BC0)
#define NODECANVAS_STATEMACHINES_CONCURRENTSUBTREE_GET_MAXINCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1AF32BA0)
#define NODECANVAS_STATEMACHINES_CONCURRENTSUBTREE_GET_MAXOUTCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1AF32BB0)
#define NODECANVAS_STATEMACHINES_CONCURRENTSUBTREE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AF32B70)
#define NODECANVAS_STATEMACHINES_CONCURRENTSUBTREE_GET_SUBGRAPHPARAMETER_OFFSET UNITYSDK_OFFSET(0x1AF32C90)
#define NODECANVAS_STATEMACHINES_CONCURRENTSUBTREE_GET_SUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1AF32BD0)
#define NODECANVAS_STATEMACHINES_CONCURRENTSUBTREE_NODECANVAS_FRAMEWORK_IUPDATABLE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1AF32E80)
#define NODECANVAS_STATEMACHINES_CONCURRENTSUBTREE_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1AF32CA0)
#define NODECANVAS_STATEMACHINES_CONCURRENTSUBTREE_SET_SUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1AF32C30)
#define NODECANVAS_STATEMACHINES_CONCURRENTSUBTREE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF32E90)
#define NODECANVAS_STATEMACHINES_CONCURRENTSUBTREE__ONGRAPHSTARTED_B__14_0_OFFSET UNITYSDK_OFFSET(0x1AF32EB0)

namespace NodeCanvas::StateMachines
{
	inline static constexpr unsigned int ConcurrentSubTree_TypeDefinitionIndex = 27140;

	class ConcurrentSubTree : public ::NodeCanvas::StateMachines::FSMNodeNested_1<::NodeCanvas::BehaviourTrees::BehaviourTree*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::NodeCanvas::BehaviourTrees::BehaviourTree*>* _subTree; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSUBTREE__CTOR_OFFSET))(this);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSUBTREE_GET_NAME_OFFSET))(this);
		}

		::System::Int32 get_maxInConnections()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSUBTREE_GET_MAXINCONNECTIONS_OFFSET))(this);
		}

		::System::Int32 get_maxOutConnections()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSUBTREE_GET_MAXOUTCONNECTIONS_OFFSET))(this);
		}

		::System::Boolean get_allowAsPrime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSUBTREE_GET_ALLOWASPRIME_OFFSET))(this);
		}

		::NodeCanvas::BehaviourTrees::BehaviourTree* get_subGraph()
		{
			return ((::NodeCanvas::BehaviourTrees::BehaviourTree*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSUBTREE_GET_SUBGRAPH_OFFSET))(this);
		}

		::System::Void set_subGraph(::NodeCanvas::BehaviourTrees::BehaviourTree* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::BehaviourTrees::BehaviourTree*))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSUBTREE_SET_SUBGRAPH_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::BBParameter* get_subGraphParameter()
		{
			return ((::NodeCanvas::Framework::BBParameter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSUBTREE_GET_SUBGRAPHPARAMETER_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSUBTREE_ONGRAPHSTARTED_OFFSET))(this);
		}

		::System::Void NodeCanvas_Framework_IUpdatable_Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSUBTREE_NODECANVAS_FRAMEWORK_IUPDATABLE_UPDATE_OFFSET))(this);
		}

		::System::Void _OnGraphStarted_b__14_0(::System::Boolean result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_CONCURRENTSUBTREE__ONGRAPHSTARTED_B__14_0_OFFSET))(this, result);
		}
	};
}
