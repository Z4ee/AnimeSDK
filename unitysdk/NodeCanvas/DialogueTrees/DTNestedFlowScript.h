#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/DialogueTrees/DTNodeNested_1.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace FlowCanvas { class FlowScript; }
namespace NodeCanvas::Framework { class BBParameter; }
namespace NodeCanvas::Framework { class IBlackboard; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace UnityEngine { class Component; }

#define NODECANVAS_DIALOGUETREES_DTNESTEDFLOWSCRIPT_GET_MAXOUTCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1BCC9170)
#define NODECANVAS_DIALOGUETREES_DTNESTEDFLOWSCRIPT_GET_SUBGRAPHPARAMETER_OFFSET UNITYSDK_OFFSET(0x1BCC9240)
#define NODECANVAS_DIALOGUETREES_DTNESTEDFLOWSCRIPT_GET_SUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1BCC9180)
#define NODECANVAS_DIALOGUETREES_DTNESTEDFLOWSCRIPT_NODECANVAS_FRAMEWORK_IUPDATABLE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BCC94E0)
#define NODECANVAS_DIALOGUETREES_DTNESTEDFLOWSCRIPT_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1BCC9250)
#define NODECANVAS_DIALOGUETREES_DTNESTEDFLOWSCRIPT_ONFLOWSCRIPTFINISH_OFFSET UNITYSDK_OFFSET(0x1BCC9680)
#define NODECANVAS_DIALOGUETREES_DTNESTEDFLOWSCRIPT_SET_SUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1BCC91E0)
#define NODECANVAS_DIALOGUETREES_DTNESTEDFLOWSCRIPT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCC9710)

namespace NodeCanvas::DialogueTrees
{
	inline static constexpr unsigned int DTNestedFlowScript_TypeDefinitionIndex = 30347;

	class DTNestedFlowScript : public ::NodeCanvas::DialogueTrees::DTNodeNested_1<::FlowCanvas::FlowScript*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::FlowCanvas::FlowScript*>* _flowScript; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DTNESTEDFLOWSCRIPT__CTOR_OFFSET))(this);
		}

		::System::Int32 get_maxOutConnections()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DTNESTEDFLOWSCRIPT_GET_MAXOUTCONNECTIONS_OFFSET))(this);
		}

		::FlowCanvas::FlowScript* get_subGraph()
		{
			return ((::FlowCanvas::FlowScript*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DTNESTEDFLOWSCRIPT_GET_SUBGRAPH_OFFSET))(this);
		}

		::System::Void set_subGraph(::FlowCanvas::FlowScript* value)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowScript*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DTNESTEDFLOWSCRIPT_SET_SUBGRAPH_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::BBParameter* get_subGraphParameter()
		{
			return ((::NodeCanvas::Framework::BBParameter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DTNESTEDFLOWSCRIPT_GET_SUBGRAPHPARAMETER_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* bb)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DTNESTEDFLOWSCRIPT_ONEXECUTE_OFFSET))(this, agent, bb);
		}

		::System::Void NodeCanvas_Framework_IUpdatable_Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DTNESTEDFLOWSCRIPT_NODECANVAS_FRAMEWORK_IUPDATABLE_UPDATE_OFFSET))(this);
		}

		::System::Void OnFlowScriptFinish(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_DTNESTEDFLOWSCRIPT_ONFLOWSCRIPTFINISH_OFFSET))(this, success);
		}
	};
}
