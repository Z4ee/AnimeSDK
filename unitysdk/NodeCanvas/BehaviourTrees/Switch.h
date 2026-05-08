#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/BTComposite.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/Switch_CaseSelectionMode.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/Switch_OutOfRangeMode.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace NodeCanvas::Framework::Internal { class BBObjectParameter; }
namespace UnityEngine { class Component; }

#define NODECANVAS_BEHAVIOURTREES_SWITCH_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1B49FD70)
#define NODECANVAS_BEHAVIOURTREES_SWITCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4A0070)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Switch_TypeDefinitionIndex = 26466;

	class Switch : public ::NodeCanvas::BehaviourTrees::BTComposite
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::Int32>* intCase; // 0x78
		::NodeCanvas::Framework::Internal::BBObjectParameter* enumCase; // 0x80
		::NodeCanvas::BehaviourTrees::Switch_CaseSelectionMode selectionMode; // 0x88
		::System::Boolean dynamic; // 0x8C
		::NodeCanvas::BehaviourTrees::Switch_OutOfRangeMode outOfRangeMode; // 0x90
		::System::Int32 current; // 0x94
		::System::Int32 runningIndex; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_SWITCH__CTOR_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_SWITCH_ONEXECUTE_OFFSET))(this, agent, blackboard);
		}
	};
}
