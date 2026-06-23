#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/DialogueTrees/DTNode.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::Framework { class IBlackboard; }
namespace UnityEngine { class Component; }

#define NODECANVAS_DIALOGUETREES_GOTONODE_GET_MAXOUTCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1D1E3AA0)
#define NODECANVAS_DIALOGUETREES_GOTONODE_GET_REQUIREACTORSELECTION_OFFSET UNITYSDK_OFFSET(0x1D1E3AB0)
#define NODECANVAS_DIALOGUETREES_GOTONODE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1D1E3AC0)
#define NODECANVAS_DIALOGUETREES_GOTONODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1E3B90)

namespace NodeCanvas::DialogueTrees
{
	inline static constexpr unsigned int GoToNode_TypeDefinitionIndex = 30585;

	class GoToNode : public ::NodeCanvas::DialogueTrees::DTNode
	{
	public:
		::NodeCanvas::DialogueTrees::DTNode* _targetNode; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_GOTONODE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_maxOutConnections()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_GOTONODE_GET_MAXOUTCONNECTIONS_OFFSET))(this);
		}

		::System::Boolean get_requireActorSelection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_GOTONODE_GET_REQUIREACTORSELECTION_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* bb)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_GOTONODE_ONEXECUTE_OFFSET))(this, agent, bb);
		}
	};
}
