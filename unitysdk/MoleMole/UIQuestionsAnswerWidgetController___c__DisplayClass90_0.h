#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIQuestionsAnswerWidgetController; }

#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS90_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16669450)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS90_0__STARTSCOREDOTWEEN_B__0_OFFSET UNITYSDK_OFFSET(0x16669550)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS90_0__STARTSCOREDOTWEEN_B__1_OFFSET UNITYSDK_OFFSET(0x166695A0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS90_0__STARTSCOREDOTWEEN_B__2_OFFSET UNITYSDK_OFFSET(0x16669460)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS90_0__STARTSCOREDOTWEEN_B__3_OFFSET UNITYSDK_OFFSET(0x166694C0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS90_0__STARTSCOREDOTWEEN_B__4_OFFSET UNITYSDK_OFFSET(0x16669520)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerWidgetController___c__DisplayClass90_0_TypeDefinitionIndex = 61865;

	class UIQuestionsAnswerWidgetController___c__DisplayClass90_0 : public ::System::Object
	{
	public:
		::MoleMole::UIQuestionsAnswerWidgetController* __4__this; // 0x10
		::System::Int32 target; // 0x18
		::System::Int32 doubleScoreFirstTarget; // 0x1C
		::System::Int32 oldScore; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS90_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartScoreDoTween_b__2(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS90_0__STARTSCOREDOTWEEN_B__2_OFFSET))(this, value);
		}

		::System::Void _StartScoreDoTween_b__3(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS90_0__STARTSCOREDOTWEEN_B__3_OFFSET))(this, value);
		}

		::System::Void _StartScoreDoTween_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS90_0__STARTSCOREDOTWEEN_B__4_OFFSET))(this);
		}

		::System::Void _StartScoreDoTween_b__0(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS90_0__STARTSCOREDOTWEEN_B__0_OFFSET))(this, value);
		}

		::System::Void _StartScoreDoTween_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS90_0__STARTSCOREDOTWEEN_B__1_OFFSET))(this);
		}
	};
}
