#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/BTNodeNested_1.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace FlowCanvas { class FlowScript; }
namespace NodeCanvas::Framework { class BBParameter; }
namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace UnityEngine { class Component; }

#define NODECANVAS_BEHAVIOURTREES_BTNESTEDFLOWSCRIPT_GET_SUBGRAPHPARAMETER_OFFSET UNITYSDK_OFFSET(0x1E7B3C50)
#define NODECANVAS_BEHAVIOURTREES_BTNESTEDFLOWSCRIPT_GET_SUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1E7B3B90)
#define NODECANVAS_BEHAVIOURTREES_BTNESTEDFLOWSCRIPT_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1E7B3C60)
#define NODECANVAS_BEHAVIOURTREES_BTNESTEDFLOWSCRIPT_ONFLOWSCRIPTFINISHED_OFFSET UNITYSDK_OFFSET(0x1E7B3EB0)
#define NODECANVAS_BEHAVIOURTREES_BTNESTEDFLOWSCRIPT_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E7B3EC0)
#define NODECANVAS_BEHAVIOURTREES_BTNESTEDFLOWSCRIPT_SET_SUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1E7B3BF0)
#define NODECANVAS_BEHAVIOURTREES_BTNESTEDFLOWSCRIPT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7B4010)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int BTNestedFlowScript_TypeDefinitionIndex = 30478;

	class BTNestedFlowScript : public ::NodeCanvas::BehaviourTrees::BTNodeNested_1<::FlowCanvas::FlowScript*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::FlowCanvas::FlowScript*>* _flowScript; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BTNESTEDFLOWSCRIPT__CTOR_OFFSET))(this);
		}

		::FlowCanvas::FlowScript* get_subGraph()
		{
			return ((::FlowCanvas::FlowScript*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BTNESTEDFLOWSCRIPT_GET_SUBGRAPH_OFFSET))(this);
		}

		::System::Void set_subGraph(::FlowCanvas::FlowScript* value)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowScript*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BTNESTEDFLOWSCRIPT_SET_SUBGRAPH_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::BBParameter* get_subGraphParameter()
		{
			return ((::NodeCanvas::Framework::BBParameter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BTNESTEDFLOWSCRIPT_GET_SUBGRAPHPARAMETER_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BTNESTEDFLOWSCRIPT_ONEXECUTE_OFFSET))(this, agent, blackboard);
		}

		::System::Void OnFlowScriptFinished(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BTNESTEDFLOWSCRIPT_ONFLOWSCRIPTFINISHED_OFFSET))(this, success);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_BTNESTEDFLOWSCRIPT_ONRESET_OFFSET))(this);
		}
	};
}
