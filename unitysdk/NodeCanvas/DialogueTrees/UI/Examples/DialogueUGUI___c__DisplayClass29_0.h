#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::DialogueTrees { class MultipleChoiceRequestInfo; }
namespace NodeCanvas::DialogueTrees::UI::Examples { class DialogueUGUI; }

#define NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7B46F0)

namespace NodeCanvas::DialogueTrees::UI::Examples
{
	inline static constexpr unsigned int DialogueUGUI___c__DisplayClass29_0_TypeDefinitionIndex = 31477;

	class DialogueUGUI___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::NodeCanvas::DialogueTrees::MultipleChoiceRequestInfo* info; // 0x10
		::NodeCanvas::DialogueTrees::UI::Examples::DialogueUGUI* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}
	};
}
