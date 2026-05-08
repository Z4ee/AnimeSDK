#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/BTComposite.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::Framework { class IBlackboard; }
namespace UnityEngine { class Component; }

#define NODECANVAS_BEHAVIOURTREES_STEPITERATOR_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1AF30520)
#define NODECANVAS_BEHAVIOURTREES_STEPITERATOR_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1AF30510)
#define NODECANVAS_BEHAVIOURTREES_STEPITERATOR_ONRESET_OFFSET UNITYSDK_OFFSET(0x1AF30610)
#define NODECANVAS_BEHAVIOURTREES_STEPITERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF30620)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int StepIterator_TypeDefinitionIndex = 26653;

	class StepIterator : public ::NodeCanvas::BehaviourTrees::BTComposite
	{
	public:
		::System::Int32 current; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_STEPITERATOR__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_STEPITERATOR_ONGRAPHSTARTED_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_STEPITERATOR_ONEXECUTE_OFFSET))(this, agent, blackboard);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_STEPITERATOR_ONRESET_OFFSET))(this);
		}
	};
}
