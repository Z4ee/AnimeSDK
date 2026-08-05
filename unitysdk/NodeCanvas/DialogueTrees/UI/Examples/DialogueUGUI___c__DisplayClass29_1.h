#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::DialogueTrees::UI::Examples { class DialogueUGUI___c__DisplayClass29_0; }
namespace UnityEngine::UI { class Button; }

#define NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI___C__DISPLAYCLASS29_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB767A0)
#define NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI___C__DISPLAYCLASS29_1__ONMULTIPLECHOICEREQUEST_B__0_OFFSET UNITYSDK_OFFSET(0x1EB767B0)

namespace NodeCanvas::DialogueTrees::UI::Examples
{
	inline static constexpr unsigned int DialogueUGUI___c__DisplayClass29_1_TypeDefinitionIndex = 31483;

	class DialogueUGUI___c__DisplayClass29_1 : public ::System::Object
	{
	public:
		::NodeCanvas::DialogueTrees::UI::Examples::DialogueUGUI___c__DisplayClass29_0* CS___8__locals1; // 0x10
		::UnityEngine::UI::Button* btn; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI___C__DISPLAYCLASS29_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnMultipleChoiceRequest_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI___C__DISPLAYCLASS29_1__ONMULTIPLECHOICEREQUEST_B__0_OFFSET))(this);
		}
	};
}
