#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::DialogueTrees { class MultipleChoiceNode; }

#define NODECANVAS_DIALOGUETREES_MULTIPLECHOICENODE___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A900A30)
#define NODECANVAS_DIALOGUETREES_MULTIPLECHOICENODE___C__DISPLAYCLASS9_0__ONOPTIONSELECTED_B__0_OFFSET UNITYSDK_OFFSET(0x1A900A40)

namespace NodeCanvas::DialogueTrees
{
	inline static constexpr unsigned int MultipleChoiceNode___c__DisplayClass9_0_TypeDefinitionIndex = 28129;

	class MultipleChoiceNode___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::NodeCanvas::DialogueTrees::MultipleChoiceNode* __4__this; // 0x10
		::System::Int32 index; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_MULTIPLECHOICENODE___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnOptionSelected_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_DIALOGUETREES_MULTIPLECHOICENODE___C__DISPLAYCLASS9_0__ONOPTIONSELECTED_B__0_OFFSET))(this);
		}
	};
}
