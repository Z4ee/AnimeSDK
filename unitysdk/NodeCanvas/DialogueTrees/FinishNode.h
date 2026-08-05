#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/DialogueTrees/DTNode.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"
#include "unitysdk/ParadoxNotion/CompactStatus.h"

namespace NodeCanvas::Framework { class IBlackboard; }
namespace UnityEngine { class Component; }

#define NODECANVAS_DIALOGUETREES_FINISHNODE_GET_MAXOUTCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1EB76680)
#define NODECANVAS_DIALOGUETREES_FINISHNODE_GET_REQUIREACTORSELECTION_OFFSET UNITYSDK_OFFSET(0x1EB76690)
#define NODECANVAS_DIALOGUETREES_FINISHNODE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1EB766A0)
#define NODECANVAS_DIALOGUETREES_FINISHNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB76750)

namespace NodeCanvas::DialogueTrees
{
	inline static constexpr unsigned int FinishNode_TypeDefinitionIndex = 30722;

	class FinishNode : public ::NodeCanvas::DialogueTrees::DTNode
	{
	public:
		::ParadoxNotion::CompactStatus finishState; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_FINISHNODE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_maxOutConnections()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_FINISHNODE_GET_MAXOUTCONNECTIONS_OFFSET))(this);
		}

		::System::Boolean get_requireActorSelection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_FINISHNODE_GET_REQUIREACTORSELECTION_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* bb)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_FINISHNODE_ONEXECUTE_OFFSET))(this, agent, bb);
		}
	};
}
