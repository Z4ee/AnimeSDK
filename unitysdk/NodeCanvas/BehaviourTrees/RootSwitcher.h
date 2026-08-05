#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/BTNode.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { class Node; }
namespace System { class String; }
namespace UnityEngine { class Component; }

#define NODECANVAS_BEHAVIOURTREES_ROOTSWITCHER_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1EB76600)
#define NODECANVAS_BEHAVIOURTREES_ROOTSWITCHER_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1EB765A0)
#define NODECANVAS_BEHAVIOURTREES_ROOTSWITCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB76670)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int RootSwitcher_TypeDefinitionIndex = 30464;

	class RootSwitcher : public ::NodeCanvas::BehaviourTrees::BTNode
	{
	public:
		::NodeCanvas::Framework::Node* targetNode; // 0x78
		::System::String* targetNodeTag; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_ROOTSWITCHER__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_ROOTSWITCHER_ONGRAPHSTARTED_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_ROOTSWITCHER_ONEXECUTE_OFFSET))(this, agent, blackboard);
		}
	};
}
