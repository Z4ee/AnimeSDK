#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/BTComposite.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::Framework { class IBlackboard; }
namespace UnityEngine { class Component; }

#define NODECANVAS_BEHAVIOURTREES_SELECTOR_ONCHILDDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x1DB9AB10)
#define NODECANVAS_BEHAVIOURTREES_SELECTOR_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1DB9A7F0)
#define NODECANVAS_BEHAVIOURTREES_SELECTOR_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1DB9AB20)
#define NODECANVAS_BEHAVIOURTREES_SELECTOR_ONRESET_OFFSET UNITYSDK_OFFSET(0x1DB9AAB0)
#define NODECANVAS_BEHAVIOURTREES_SELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB9AB80)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Selector_TypeDefinitionIndex = 29605;

	class Selector : public ::NodeCanvas::BehaviourTrees::BTComposite
	{
	public:
		::System::Boolean dynamic; // 0x78
		::System::Boolean random; // 0x79
		::System::Int32 lastRunningNodeIndex; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_SELECTOR__CTOR_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_SELECTOR_ONEXECUTE_OFFSET))(this, agent, blackboard);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_SELECTOR_ONRESET_OFFSET))(this);
		}

		::System::Void OnChildDisconnected(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_SELECTOR_ONCHILDDISCONNECTED_OFFSET))(this, index);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_SELECTOR_ONGRAPHSTARTED_OFFSET))(this);
		}
	};
}
