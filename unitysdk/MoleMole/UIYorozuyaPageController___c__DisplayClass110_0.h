#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UILineupSelectContext; }
namespace MoleMole { class UIYorozuyaPageController; }

#define MOLEMOLE_UIYOROZUYAPAGECONTROLLER___C__DISPLAYCLASS110_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11C299A0)
#define MOLEMOLE_UIYOROZUYAPAGECONTROLLER___C__DISPLAYCLASS110_0__GOTOUILINEUPSELECT_B__0_OFFSET UNITYSDK_OFFSET(0x11C299B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaPageController___c__DisplayClass110_0_TypeDefinitionIndex = 54551;

	class UIYorozuyaPageController___c__DisplayClass110_0 : public ::System::Object
	{
	public:
		::MoleMole::UIYorozuyaPageController* __4__this; // 0x10
		::MoleMole::UILineupSelectContext* context; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAPAGECONTROLLER___C__DISPLAYCLASS110_0__CTOR_OFFSET))(this);
		}

		::System::Void _GoToUILineupSelect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAPAGECONTROLLER___C__DISPLAYCLASS110_0__GOTOUILINEUPSELECT_B__0_OFFSET))(this);
		}
	};
}
