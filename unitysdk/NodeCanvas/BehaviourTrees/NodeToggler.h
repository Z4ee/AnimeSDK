#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/BTNode.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/NodeToggler_ToggleMode.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { class Node; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }

#define NODECANVAS_BEHAVIOURTREES_NODETOGGLER_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1D537BD0)
#define NODECANVAS_BEHAVIOURTREES_NODETOGGLER_ONGRAPHSTARTED_OFFSET UNITYSDK_OFFSET(0x1D537B60)
#define NODECANVAS_BEHAVIOURTREES_NODETOGGLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D538050)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int NodeToggler_TypeDefinitionIndex = 29219;

	class NodeToggler : public ::NodeCanvas::BehaviourTrees::BTNode
	{
	public:
		::System::Collections::Generic::List_1<::NodeCanvas::Framework::Node*>* targetNodes; // 0x78
		::System::String* targetNodeTag; // 0x80
		::NodeCanvas::BehaviourTrees::NodeToggler_ToggleMode toggleMode; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_NODETOGGLER__CTOR_OFFSET))(this);
		}

		::System::Void OnGraphStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_NODETOGGLER_ONGRAPHSTARTED_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_NODETOGGLER_ONEXECUTE_OFFSET))(this, agent, blackboard);
		}
	};
}
