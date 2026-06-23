#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/BTDecorator.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/Remapper_RemapStatus.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::Framework { class IBlackboard; }
namespace UnityEngine { class Component; }

#define NODECANVAS_BEHAVIOURTREES_REMAPPER_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1D356780)
#define NODECANVAS_BEHAVIOURTREES_REMAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3568D0)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Remapper_TypeDefinitionIndex = 30692;

	class Remapper : public ::NodeCanvas::BehaviourTrees::BTDecorator
	{
	public:
		::NodeCanvas::BehaviourTrees::Remapper_RemapStatus successRemap; // 0x78
		::NodeCanvas::BehaviourTrees::Remapper_RemapStatus failureRemap; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_REMAPPER__CTOR_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_REMAPPER_ONEXECUTE_OFFSET))(this, agent, blackboard);
		}
	};
}
