#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EMainHollowShowType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIYorozuyaPageController; }

#define MOLEMOLE_UIYOROZUYAPAGECONTROLLER___C__DISPLAYCLASS132_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC938110)
#define MOLEMOLE_UIYOROZUYAPAGECONTROLLER___C__DISPLAYCLASS132_0__SETSCROLLVIEW_B__0_OFFSET UNITYSDK_OFFSET(0xC938120)
#define MOLEMOLE_UIYOROZUYAPAGECONTROLLER___C__DISPLAYCLASS132_0__SETSCROLLVIEW_B__3_OFFSET UNITYSDK_OFFSET(0xC938540)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaPageController___c__DisplayClass132_0_TypeDefinitionIndex = 74412;

	class UIYorozuyaPageController___c__DisplayClass132_0 : public ::System::Object
	{
	public:
		::MoleMole::UIYorozuyaPageController* __4__this; // 0x10
		::Share::EMainHollowShowType showType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAPAGECONTROLLER___C__DISPLAYCLASS132_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetScrollView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAPAGECONTROLLER___C__DISPLAYCLASS132_0__SETSCROLLVIEW_B__0_OFFSET))(this);
		}

		::System::Void _SetScrollView_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAPAGECONTROLLER___C__DISPLAYCLASS132_0__SETSCROLLVIEW_B__3_OFFSET))(this);
		}
	};
}
