#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/DialogueTrees/DTNode.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::DialogueTrees { class Statement; }
namespace NodeCanvas::Framework { class IBlackboard; }
namespace UnityEngine { class Component; }

#define NODECANVAS_DIALOGUETREES_STATEMENTNODE_GET_REQUIREACTORSELECTION_OFFSET UNITYSDK_OFFSET(0x1EB92670)
#define NODECANVAS_DIALOGUETREES_STATEMENTNODE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1EB92680)
#define NODECANVAS_DIALOGUETREES_STATEMENTNODE_ONSTATEMENTFINISH_OFFSET UNITYSDK_OFFSET(0x1EB92790)
#define NODECANVAS_DIALOGUETREES_STATEMENTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB92810)

namespace NodeCanvas::DialogueTrees
{
	inline static constexpr unsigned int StatementNode_TypeDefinitionIndex = 30046;

	class StatementNode : public ::NodeCanvas::DialogueTrees::DTNode
	{
	public:
		::NodeCanvas::DialogueTrees::Statement* statement; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_STATEMENTNODE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_requireActorSelection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_STATEMENTNODE_GET_REQUIREACTORSELECTION_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* bb)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_STATEMENTNODE_ONEXECUTE_OFFSET))(this, agent, bb);
		}

		::System::Void OnStatementFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_STATEMENTNODE_ONSTATEMENTFINISH_OFFSET))(this);
		}
	};
}
