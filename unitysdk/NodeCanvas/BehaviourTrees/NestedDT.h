#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/BTNodeNested_1.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::DialogueTrees { class DialogueTree; }
namespace NodeCanvas::Framework { class BBParameter; }
namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace UnityEngine { class Component; }

#define NODECANVAS_BEHAVIOURTREES_NESTEDDT_GET_SUBGRAPHPARAMETER_OFFSET UNITYSDK_OFFSET(0x1E72CBD0)
#define NODECANVAS_BEHAVIOURTREES_NESTEDDT_GET_SUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1E72CB10)
#define NODECANVAS_BEHAVIOURTREES_NESTEDDT_ONDLGFINISHED_OFFSET UNITYSDK_OFFSET(0x1E72CEA0)
#define NODECANVAS_BEHAVIOURTREES_NESTEDDT_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1E72CBE0)
#define NODECANVAS_BEHAVIOURTREES_NESTEDDT_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E72CEB0)
#define NODECANVAS_BEHAVIOURTREES_NESTEDDT_SET_SUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1E72CB70)
#define NODECANVAS_BEHAVIOURTREES_NESTEDDT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E72D000)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int NestedDT_TypeDefinitionIndex = 30591;

	class NestedDT : public ::NodeCanvas::BehaviourTrees::BTNodeNested_1<::NodeCanvas::DialogueTrees::DialogueTree*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::NodeCanvas::DialogueTrees::DialogueTree*>* _nestedDialogueTree; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_NESTEDDT__CTOR_OFFSET))(this);
		}

		::NodeCanvas::DialogueTrees::DialogueTree* get_subGraph()
		{
			return ((::NodeCanvas::DialogueTrees::DialogueTree*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_NESTEDDT_GET_SUBGRAPH_OFFSET))(this);
		}

		::System::Void set_subGraph(::NodeCanvas::DialogueTrees::DialogueTree* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::DialogueTrees::DialogueTree*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_NESTEDDT_SET_SUBGRAPH_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::BBParameter* get_subGraphParameter()
		{
			return ((::NodeCanvas::Framework::BBParameter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_NESTEDDT_GET_SUBGRAPHPARAMETER_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_NESTEDDT_ONEXECUTE_OFFSET))(this, agent, blackboard);
		}

		::System::Void OnDLGFinished(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_NESTEDDT_ONDLGFINISHED_OFFSET))(this, success);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_NESTEDDT_ONRESET_OFFSET))(this);
		}
	};
}
