#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ActionTask_1.h"

namespace NodeCanvas::DialogueTrees { class IDialogueActor; }
namespace NodeCanvas::DialogueTrees { class Statement; }
namespace System { class String; }

#define NODECANVAS_TASKS_ACTIONS_SAY_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1EF92A50)
#define NODECANVAS_TASKS_ACTIONS_SAY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1EF92B40)
#define NODECANVAS_TASKS_ACTIONS_SAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF92D30)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int Say_TypeDefinitionIndex = 30861;

	class Say : public ::NodeCanvas::Framework::ActionTask_1<::NodeCanvas::DialogueTrees::IDialogueActor*>
	{
	public:
		::NodeCanvas::DialogueTrees::Statement* statement; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SAY__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SAY_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SAY_ONEXECUTE_OFFSET))(this);
		}
	};
}
