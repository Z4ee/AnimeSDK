#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_3C4EC276A982A2CD;
namespace MoleMole { class UIFishingContestQuestPageController___c__DisplayClass19_0; }

#define MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER___C__DISPLAYCLASS19_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19AB37E0)
#define MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER___C__DISPLAYCLASS19_1__ONGOTOTASKBUTTON_B__0_OFFSET UNITYSDK_OFFSET(0x19AB37F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFishingContestQuestPageController___c__DisplayClass19_1_TypeDefinitionIndex = 46617;

	class UIFishingContestQuestPageController___c__DisplayClass19_1 : public ::System::Object
	{
	public:
		::MoleMole::UIFishingContestQuestPageController___c__DisplayClass19_0* CS___8__locals1; // 0x10
		::Class_2_3C4EC276A982A2CD* model; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER___C__DISPLAYCLASS19_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnGotoTaskButton_b__0(::System::Boolean isGoFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHINGCONTESTQUESTPAGECONTROLLER___C__DISPLAYCLASS19_1__ONGOTOTASKBUTTON_B__0_OFFSET))(this, isGoFinish);
		}
	};
}
