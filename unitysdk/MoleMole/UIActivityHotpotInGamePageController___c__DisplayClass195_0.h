#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIActivityHotpotInGamePageController; }
namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS195_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18E11A00)
#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS195_0__PLAYCOUNTDOWNANIM_B__0_OFFSET UNITYSDK_OFFSET(0x18E11A10)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotInGamePageController___c__DisplayClass195_0_TypeDefinitionIndex = 87247;

	class UIActivityHotpotInGamePageController___c__DisplayClass195_0 : public ::System::Object
	{
	public:
		::System::Action* finishCallBack; // 0x10
		::MoleMole::UIActivityHotpotInGamePageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS195_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayCountDownAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS195_0__PLAYCOUNTDOWNANIM_B__0_OFFSET))(this);
		}
	};
}
