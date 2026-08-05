#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/BTDecorator.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace UnityEngine { class Component; }

#define NODECANVAS_BEHAVIOURTREES_TIMEOUT_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1E8C1060)
#define NODECANVAS_BEHAVIOURTREES_TIMEOUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8C1280)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Timeout_TypeDefinitionIndex = 30959;

	class Timeout : public ::NodeCanvas::BehaviourTrees::BTDecorator
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* timeout; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_TIMEOUT__CTOR_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_TIMEOUT_ONEXECUTE_OFFSET))(this, agent, blackboard);
		}
	};
}
