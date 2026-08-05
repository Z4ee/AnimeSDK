#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/BTDecorator.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::Framework { class IBlackboard; }
namespace UnityEngine { class Component; }

#define NODECANVAS_BEHAVIOURTREES_MERGE_GET_MAXINCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1DFDCA80)
#define NODECANVAS_BEHAVIOURTREES_MERGE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1DFDCA90)
#define NODECANVAS_BEHAVIOURTREES_MERGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFDCC00)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Merge_TypeDefinitionIndex = 30822;

	class Merge : public ::NodeCanvas::BehaviourTrees::BTDecorator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_MERGE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_maxInConnections()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_MERGE_GET_MAXINCONNECTIONS_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_MERGE_ONEXECUTE_OFFSET))(this, agent, blackboard);
		}
	};
}
