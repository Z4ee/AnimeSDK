#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGachaPageController; }

#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS68_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19ABABC0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS68_0__GACHA_B__2_OFFSET UNITYSDK_OFFSET(0x19ABADE0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS68_0__GACHA_G__QUICKBUYORGACHA_0_OFFSET UNITYSDK_OFFSET(0x19ABABD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPageController___c__DisplayClass68_0_TypeDefinitionIndex = 84827;

	class UIGachaPageController___c__DisplayClass68_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGachaPageController* __4__this; // 0x10
		::System::UInt32 times; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS68_0__CTOR_OFFSET))(this);
		}

		::System::Void _Gacha_g__QuickBuyOrGacha_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS68_0__GACHA_G__QUICKBUYORGACHA_0_OFFSET))(this);
		}

		::System::Void _Gacha_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS68_0__GACHA_B__2_OFFSET))(this);
		}
	};
}
