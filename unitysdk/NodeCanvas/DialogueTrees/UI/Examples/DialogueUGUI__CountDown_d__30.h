#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::DialogueTrees { class MultipleChoiceRequestInfo; }
namespace NodeCanvas::DialogueTrees::UI::Examples { class DialogueUGUI; }

#define NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI__COUNTDOWN_D__30_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E53FA50)
#define NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI__COUNTDOWN_D__30_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E53FBE0)
#define NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI__COUNTDOWN_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E53FC40)
#define NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI__COUNTDOWN_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1E53FBF0)
#define NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI__COUNTDOWN_D__30_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E53FA40)
#define NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI__COUNTDOWN_D__30__CTOR_OFFSET UNITYSDK_OFFSET(0x1E53FA30)

namespace NodeCanvas::DialogueTrees::UI::Examples
{
	inline static constexpr unsigned int DialogueUGUI__CountDown_d__30_TypeDefinitionIndex = 31484;

	class DialogueUGUI__CountDown_d__30 : public ::System::Object
	{
	public:
		::NodeCanvas::DialogueTrees::MultipleChoiceRequestInfo* info; // 0x10
		::System::Object* __2__current; // 0x18
		::NodeCanvas::DialogueTrees::UI::Examples::DialogueUGUI* __4__this; // 0x20
		::System::Single _timer_5__2; // 0x28
		::System::Int32 __1__state; // 0x2C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI__COUNTDOWN_D__30__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI__COUNTDOWN_D__30_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI__COUNTDOWN_D__30_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI__COUNTDOWN_D__30_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI__COUNTDOWN_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI__COUNTDOWN_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
