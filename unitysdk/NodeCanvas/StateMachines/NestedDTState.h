#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/StateMachines/FSMStateNested_1.h"

namespace NodeCanvas::DialogueTrees { class DialogueTree; }
namespace NodeCanvas::Framework { class BBParameter; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_STATEMACHINES_NESTEDDTSTATE_GET_SUBGRAPHPARAMETER_OFFSET UNITYSDK_OFFSET(0x1EBC00C0)
#define NODECANVAS_STATEMACHINES_NESTEDDTSTATE_GET_SUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1EBC0000)
#define NODECANVAS_STATEMACHINES_NESTEDDTSTATE_ONDIALOGUEFINISHED_OFFSET UNITYSDK_OFFSET(0x1EBC0590)
#define NODECANVAS_STATEMACHINES_NESTEDDTSTATE_ONENTER_OFFSET UNITYSDK_OFFSET(0x1EBC00D0)
#define NODECANVAS_STATEMACHINES_NESTEDDTSTATE_ONEXIT_OFFSET UNITYSDK_OFFSET(0x1EBC0430)
#define NODECANVAS_STATEMACHINES_NESTEDDTSTATE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1EBC03C0)
#define NODECANVAS_STATEMACHINES_NESTEDDTSTATE_SET_SUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1EBC0060)
#define NODECANVAS_STATEMACHINES_NESTEDDTSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBC0610)

namespace NodeCanvas::StateMachines
{
	inline static constexpr unsigned int NestedDTState_TypeDefinitionIndex = 30039;

	class NestedDTState : public ::NodeCanvas::StateMachines::FSMStateNested_1<::NodeCanvas::DialogueTrees::DialogueTree*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::NodeCanvas::DialogueTrees::DialogueTree*>* _nestedDLG; // 0x98
		::System::String* failureEvent; // 0xA0
		::System::String* successEvent; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_NESTEDDTSTATE__CTOR_OFFSET))(this);
		}

		::NodeCanvas::DialogueTrees::DialogueTree* get_subGraph()
		{
			return ((::NodeCanvas::DialogueTrees::DialogueTree*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_NESTEDDTSTATE_GET_SUBGRAPH_OFFSET))(this);
		}

		::System::Void set_subGraph(::NodeCanvas::DialogueTrees::DialogueTree* value)
		{
			return ((::System::Void(*)(::PVOID, ::NodeCanvas::DialogueTrees::DialogueTree*))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_NESTEDDTSTATE_SET_SUBGRAPH_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::BBParameter* get_subGraphParameter()
		{
			return ((::NodeCanvas::Framework::BBParameter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_NESTEDDTSTATE_GET_SUBGRAPHPARAMETER_OFFSET))(this);
		}

		::System::Void OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_NESTEDDTSTATE_ONENTER_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_NESTEDDTSTATE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_NESTEDDTSTATE_ONEXIT_OFFSET))(this);
		}

		::System::Void OnDialogueFinished(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_NESTEDDTSTATE_ONDIALOGUEFINISHED_OFFSET))(this, success);
		}
	};
}
