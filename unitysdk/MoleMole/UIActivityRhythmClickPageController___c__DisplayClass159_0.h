#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIActivityRhythmClickPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS159_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15E4A510)
#define MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS159_0__PLAYSTARTCOUNTDOWNANIM_B__0_OFFSET UNITYSDK_OFFSET(0x15E4A520)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityRhythmClickPageController___c__DisplayClass159_0_TypeDefinitionIndex = 81299;

	class UIActivityRhythmClickPageController___c__DisplayClass159_0 : public ::System::Object
	{
	public:
		::System::Action* action; // 0x10
		::MoleMole::UIActivityRhythmClickPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS159_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayStartCountDownAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRHYTHMCLICKPAGECONTROLLER___C__DISPLAYCLASS159_0__PLAYSTARTCOUNTDOWNANIM_B__0_OFFSET))(this);
		}
	};
}
