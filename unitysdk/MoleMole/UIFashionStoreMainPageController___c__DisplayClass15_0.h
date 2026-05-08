#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BD2BE7927F889C7B;
namespace MoleMole { class UIFashionStoreMainPageController; }

#define MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16980120)
#define MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER___C__DISPLAYCLASS15_0__ONCLICKBUYBTN_B__0_OFFSET UNITYSDK_OFFSET(0x16980130)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStoreMainPageController___c__DisplayClass15_0_TypeDefinitionIndex = 62344;

	class UIFashionStoreMainPageController___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::Class_1_BD2BE7927F889C7B* selectedItem; // 0x10
		::MoleMole::UIFashionStoreMainPageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickBuyBtn_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMAINPAGECONTROLLER___C__DISPLAYCLASS15_0__ONCLICKBUYBTN_B__0_OFFSET))(this);
		}
	};
}
