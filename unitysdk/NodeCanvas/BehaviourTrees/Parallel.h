#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/BTComposite.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/Parallel_ParallelPolicy.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::Framework { class Connection; }
namespace NodeCanvas::Framework { class IBlackboard; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }

#define NODECANVAS_BEHAVIOURTREES_PARALLEL_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1985A8A0)
#define NODECANVAS_BEHAVIOURTREES_PARALLEL_ONRESET_OFFSET UNITYSDK_OFFSET(0x1985ABF0)
#define NODECANVAS_BEHAVIOURTREES_PARALLEL_RESETRUNNING_OFFSET UNITYSDK_OFFSET(0x1985AB50)
#define NODECANVAS_BEHAVIOURTREES_PARALLEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1985AC30)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Parallel_TypeDefinitionIndex = 26910;

	class Parallel : public ::NodeCanvas::BehaviourTrees::BTComposite
	{
	public:
		::System::Collections::Generic::List_1<::NodeCanvas::Framework::Connection*>* finishedConnections; // 0x78
		::System::Boolean dynamic; // 0x80
		::NodeCanvas::BehaviourTrees::Parallel_ParallelPolicy policy; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_PARALLEL__CTOR_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_PARALLEL_ONEXECUTE_OFFSET))(this, agent, blackboard);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_PARALLEL_ONRESET_OFFSET))(this);
		}

		::System::Void ResetRunning()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_PARALLEL_RESETRUNNING_OFFSET))(this);
		}
	};
}
