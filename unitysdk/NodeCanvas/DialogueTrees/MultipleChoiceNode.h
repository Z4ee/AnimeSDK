#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/DialogueTrees/DTNode.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::DialogueTrees { class MultipleChoiceNode_Choice; }
namespace NodeCanvas::Framework { class IBlackboard; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }

#define NODECANVAS_DIALOGUETREES_MULTIPLECHOICENODE_GET_MAXOUTCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1E6DA660)
#define NODECANVAS_DIALOGUETREES_MULTIPLECHOICENODE_GET_REQUIREACTORSELECTION_OFFSET UNITYSDK_OFFSET(0x1E6DA680)
#define NODECANVAS_DIALOGUETREES_MULTIPLECHOICENODE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1E6DA690)
#define NODECANVAS_DIALOGUETREES_MULTIPLECHOICENODE_ONOPTIONSELECTED_OFFSET UNITYSDK_OFFSET(0x1E6DAB20)
#define NODECANVAS_DIALOGUETREES_MULTIPLECHOICENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6DACD0)

namespace NodeCanvas::DialogueTrees
{
	inline static constexpr unsigned int MultipleChoiceNode_TypeDefinitionIndex = 31397;

	class MultipleChoiceNode : public ::NodeCanvas::DialogueTrees::DTNode
	{
	public:
		::System::Collections::Generic::List_1<::NodeCanvas::DialogueTrees::MultipleChoiceNode_Choice*>* availableChoices; // 0x88
		::System::Single availableTime; // 0x90
		::System::Boolean saySelection; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_MULTIPLECHOICENODE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_maxOutConnections()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_MULTIPLECHOICENODE_GET_MAXOUTCONNECTIONS_OFFSET))(this);
		}

		::System::Boolean get_requireActorSelection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_MULTIPLECHOICENODE_GET_REQUIREACTORSELECTION_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* bb)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_MULTIPLECHOICENODE_ONEXECUTE_OFFSET))(this, agent, bb);
		}

		::System::Void OnOptionSelected(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_MULTIPLECHOICENODE_ONOPTIONSELECTED_OFFSET))(this, index);
		}
	};
}
