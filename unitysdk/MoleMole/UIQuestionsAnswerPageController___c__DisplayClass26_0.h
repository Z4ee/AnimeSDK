#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIQuestionsAnswerPageController; }

#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x178E36E0)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__DISPLAYCLASS26_0__STARTGAMETASK_B__0_OFFSET UNITYSDK_OFFSET(0x178E36F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerPageController___c__DisplayClass26_0_TypeDefinitionIndex = 59275;

	class UIQuestionsAnswerPageController___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::MoleMole::UIQuestionsAnswerPageController* __4__this; // 0x10
		::System::Boolean restart; // 0x18
		::System::Int32 stageId; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartGameTask_b__0(::Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF reason)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER___C__DISPLAYCLASS26_0__STARTGAMETASK_B__0_OFFSET))(this, reason);
		}
	};
}
