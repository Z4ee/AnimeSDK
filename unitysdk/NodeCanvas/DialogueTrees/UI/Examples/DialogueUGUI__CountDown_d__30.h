#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::DialogueTrees { class MultipleChoiceRequestInfo; }
namespace NodeCanvas::DialogueTrees::UI::Examples { class DialogueUGUI; }

#define NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI__COUNTDOWN_D__30_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D1E3BF0)
#define NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI__COUNTDOWN_D__30_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D1E3D70)
#define NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI__COUNTDOWN_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D1E3DD0)
#define NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI__COUNTDOWN_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D1E3D80)
#define NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI__COUNTDOWN_D__30_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D1E3BE0)
#define NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI__COUNTDOWN_D__30__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1E3BD0)

namespace NodeCanvas::DialogueTrees::UI::Examples
{
	inline static constexpr unsigned int DialogueUGUI__CountDown_d__30_TypeDefinitionIndex = 30815;

	class DialogueUGUI__CountDown_d__30 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::NodeCanvas::DialogueTrees::MultipleChoiceRequestInfo* info; // 0x18
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
