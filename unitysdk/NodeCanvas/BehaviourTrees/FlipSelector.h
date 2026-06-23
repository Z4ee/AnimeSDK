#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/BTComposite.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::Framework { class IBlackboard; }
namespace UnityEngine { class Component; }

#define NODECANVAS_BEHAVIOURTREES_FLIPSELECTOR_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1D1E37B0)
#define NODECANVAS_BEHAVIOURTREES_FLIPSELECTOR_ONRESET_OFFSET UNITYSDK_OFFSET(0x1D1E3A20)
#define NODECANVAS_BEHAVIOURTREES_FLIPSELECTOR_SENDTOBACK_OFFSET UNITYSDK_OFFSET(0x1D1E3940)
#define NODECANVAS_BEHAVIOURTREES_FLIPSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1E3A30)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int FlipSelector_TypeDefinitionIndex = 29460;

	class FlipSelector : public ::NodeCanvas::BehaviourTrees::BTComposite
	{
	public:
		::System::Int32 current; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_FLIPSELECTOR__CTOR_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_FLIPSELECTOR_ONEXECUTE_OFFSET))(this, agent, blackboard);
		}

		::System::Void SendToBack(::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_FLIPSELECTOR_SENDTOBACK_OFFSET))(this, i);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_FLIPSELECTOR_ONRESET_OFFSET))(this);
		}
	};
}
