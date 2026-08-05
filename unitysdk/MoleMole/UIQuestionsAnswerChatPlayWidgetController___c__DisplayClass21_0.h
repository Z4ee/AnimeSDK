#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIQuestionsAnswerChatPlayWidgetController; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17A12950)
#define MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS21_0__STARTPLAYTEXT_B__0_OFFSET UNITYSDK_OFFSET(0x17A146E0)
#define MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS21_0__STARTPLAYTEXT_B__1_OFFSET UNITYSDK_OFFSET(0x17A14830)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerChatPlayWidgetController___c__DisplayClass21_0_TypeDefinitionIndex = 57031;

	class UIQuestionsAnswerChatPlayWidgetController___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::System::String* textKey; // 0x10
		::MoleMole::UIQuestionsAnswerChatPlayWidgetController* __4__this; // 0x18
		::System::Action* __9__1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartPlayText_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS21_0__STARTPLAYTEXT_B__0_OFFSET))(this);
		}

		::System::Void _StartPlayText_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER___C__DISPLAYCLASS21_0__STARTPLAYTEXT_B__1_OFFSET))(this);
		}
	};
}
