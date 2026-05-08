#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRidusGotBooPageController; }

#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS211_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14DB0770)
#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS211_0__WAITUNTILTIMECURSOR_B__0_OFFSET UNITYSDK_OFFSET(0x14DB0780)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooPageController___c__DisplayClass211_0_TypeDefinitionIndex = 75563;

	class UIRidusGotBooPageController___c__DisplayClass211_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRidusGotBooPageController* __4__this; // 0x10
		::System::Single resumeTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS211_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _WaitUntilTimeCursor_b__0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS211_0__WAITUNTILTIMECURSOR_B__0_OFFSET))(this);
		}
	};
}
