#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"

namespace NodeCanvas::DialogueTrees { class DialogueTreeController; }
namespace NodeCanvas::DialogueTrees { class IDialogueActor; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_TASKS_ACTIONS_STARTDIALOGUETREE_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1C63BFB0)
#define NODECANVAS_TASKS_ACTIONS_STARTDIALOGUETREE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1C63C020)
#define NODECANVAS_TASKS_ACTIONS_STARTDIALOGUETREE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C63C1A0)
#define NODECANVAS_TASKS_ACTIONS_STARTDIALOGUETREE__ONEXECUTE_B__6_0_OFFSET UNITYSDK_OFFSET(0x1C63C1B0)
#define NODECANVAS_TASKS_ACTIONS_STARTDIALOGUETREE__ONEXECUTE_B__6_1_OFFSET UNITYSDK_OFFSET(0x1C63C2C0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int StartDialogueTree_TypeDefinitionIndex = 30504;

	class StartDialogueTree : public ::NodeCanvas::Framework::ActionTask_1<::NodeCanvas::DialogueTrees::IDialogueActor*>
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::NodeCanvas::DialogueTrees::DialogueTreeController*>* dialogueTreeController; // 0x60
		::NodeCanvas::DialogueTrees::DialogueTreeController* instance; // 0x68
		::System::Boolean isPrefab; // 0x70
		::System::Boolean waitActionFinish; // 0x71

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_STARTDIALOGUETREE__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_STARTDIALOGUETREE_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_STARTDIALOGUETREE_ONEXECUTE_OFFSET))(this);
		}

		::System::Void _OnExecute_b__6_0(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_STARTDIALOGUETREE__ONEXECUTE_B__6_0_OFFSET))(this, success);
		}

		::System::Void _OnExecute_b__6_1(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_STARTDIALOGUETREE__ONEXECUTE_B__6_1_OFFSET))(this, success);
		}
	};
}
