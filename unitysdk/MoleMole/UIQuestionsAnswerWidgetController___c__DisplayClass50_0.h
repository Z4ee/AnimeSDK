#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS50_0__CANCEL_B__0_OFFSET UNITYSDK_OFFSET(0x1757B260)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1757B250)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerWidgetController___c__DisplayClass50_0_TypeDefinitionIndex = 88943;

	class UIQuestionsAnswerWidgetController___c__DisplayClass50_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
		}

		::System::Void _Cancel_b__0(::System::Boolean b)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS50_0__CANCEL_B__0_OFFSET))(this, b);
		}
	};
}
