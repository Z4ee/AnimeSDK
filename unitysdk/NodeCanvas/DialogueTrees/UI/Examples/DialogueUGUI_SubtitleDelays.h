#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI_SUBTITLEDELAYS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8204C0)

namespace NodeCanvas::DialogueTrees::UI::Examples
{
	inline static constexpr unsigned int DialogueUGUI_SubtitleDelays_TypeDefinitionIndex = 30808;

	class DialogueUGUI_SubtitleDelays : public ::System::Object
	{
	public:
		::System::Single characterDelay; // 0x10
		::System::Single sentenceDelay; // 0x14
		::System::Single commaDelay; // 0x18
		::System::Single finalDelay; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_UI_EXAMPLES_DIALOGUEUGUI_SUBTITLEDELAYS__CTOR_OFFSET))(this);
		}
	};
}
