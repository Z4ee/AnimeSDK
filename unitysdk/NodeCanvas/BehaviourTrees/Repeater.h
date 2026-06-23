#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/BTDecorator.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/Repeater_RepeatUntilStatus.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/Repeater_RepeaterMode.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace UnityEngine { class Component; }

#define NODECANVAS_BEHAVIOURTREES_REPEATER_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1D6E4D70)
#define NODECANVAS_BEHAVIOURTREES_REPEATER_ONRESET_OFFSET UNITYSDK_OFFSET(0x1D6E5000)
#define NODECANVAS_BEHAVIOURTREES_REPEATER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E5010)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Repeater_TypeDefinitionIndex = 30180;

	class Repeater : public ::NodeCanvas::BehaviourTrees::BTDecorator
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Int32>* repeatTimes; // 0x78
		::System::Int32 currentIteration; // 0x80
		::NodeCanvas::BehaviourTrees::Repeater_RepeaterMode repeaterMode; // 0x84
		::NodeCanvas::BehaviourTrees::Repeater_RepeatUntilStatus repeatUntilStatus; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_REPEATER__CTOR_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_REPEATER_ONEXECUTE_OFFSET))(this, agent, blackboard);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_REPEATER_ONRESET_OFFSET))(this);
		}
	};
}
