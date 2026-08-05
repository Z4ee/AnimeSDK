#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/BTDecorator.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/Filter_FilterMode.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/Filter_Policy.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Component; }

#define NODECANVAS_BEHAVIOURTREES_FILTER_COOLDOWN_OFFSET UNITYSDK_OFFSET(0x1E53F4E0)
#define NODECANVAS_BEHAVIOURTREES_FILTER_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1E53F1D0)
#define NODECANVAS_BEHAVIOURTREES_FILTER_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1E53F1C0)
#define NODECANVAS_BEHAVIOURTREES_FILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E53F530)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Filter_TypeDefinitionIndex = 30988;

	class Filter : public ::NodeCanvas::BehaviourTrees::BTDecorator
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Int32>* maxCount; // 0x78
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* coolDownTime; // 0x80
		::NodeCanvas::BehaviourTrees::Filter_FilterMode filterMode; // 0x88
		::System::Boolean inactiveWhenLimited; // 0x8C
		::NodeCanvas::BehaviourTrees::Filter_Policy policy; // 0x90
		::System::Single currentTime; // 0x94
		::System::Int32 executedCount; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_FILTER__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_FILTER_ONGRAPHSTOPED_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_FILTER_ONEXECUTE_OFFSET))(this, agent, blackboard);
		}

		::System::Collections::IEnumerator* Cooldown()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_FILTER_COOLDOWN_OFFSET))(this);
		}
	};
}
