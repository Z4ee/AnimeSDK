#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5A17F85799580BCA_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIQuestionsAnswerPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1885D0E0)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__DISPLAYCLASS25_0__STARTGAME_B__0_OFFSET UNITYSDK_OFFSET(0x1885D0F0)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__DISPLAYCLASS25_0__STARTGAME_B__1_OFFSET UNITYSDK_OFFSET(0x1885D2F0)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__DISPLAYCLASS25_0__STARTGAME_B__2_OFFSET UNITYSDK_OFFSET(0x1885DDF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerPageController___c__DisplayClass25_0_TypeDefinitionIndex = 89534;

	class UIQuestionsAnswerPageController___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::System::Action* __9__2; // 0x10
		::MoleMole::UIQuestionsAnswerPageController* __4__this; // 0x18
		::System::Action* __9__1; // 0x20
		::System::Boolean restart; // 0x28
		::System::Int32 stageId; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartGame_b__0(::Class_1_5A17F85799580BCA_Enum_3_6E0E8267CDDC65CF reason)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5A17F85799580BCA_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__DISPLAYCLASS25_0__STARTGAME_B__0_OFFSET))(this, reason);
		}

		::System::Void _StartGame_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__DISPLAYCLASS25_0__STARTGAME_B__1_OFFSET))(this);
		}

		::System::Void _StartGame_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__DISPLAYCLASS25_0__STARTGAME_B__2_OFFSET))(this);
		}
	};
}
