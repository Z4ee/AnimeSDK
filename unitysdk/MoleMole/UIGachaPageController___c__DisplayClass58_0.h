#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGachaPageController; }

#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS58_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17637180)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS58_0__GACHA_B__1_OFFSET UNITYSDK_OFFSET(0x176373B0)
#define MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS58_0__GACHA_G__QUICKBUYORGACHA_0_OFFSET UNITYSDK_OFFSET(0x17637190)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPageController___c__DisplayClass58_0_TypeDefinitionIndex = 64990;

	class UIGachaPageController___c__DisplayClass58_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGachaPageController* __4__this; // 0x10
		::System::UInt32 times; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS58_0__CTOR_OFFSET))(this);
		}

		::System::Void _Gacha_g__QuickBuyOrGacha_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS58_0__GACHA_G__QUICKBUYORGACHA_0_OFFSET))(this);
		}

		::System::Void _Gacha_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPAGECONTROLLER___C__DISPLAYCLASS58_0__GACHA_B__1_OFFSET))(this);
		}
	};
}
