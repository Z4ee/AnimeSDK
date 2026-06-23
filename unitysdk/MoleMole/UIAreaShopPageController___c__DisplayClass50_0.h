#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_29;
class Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C;
namespace MoleMole { class UIAreaShopPageController; }

#define MOLEMOLE_UIAREASHOPPAGECONTROLLER___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0x175F0000)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER___C__DISPLAYCLASS50_0__ONCLICKREFRESHGOODS_B__0_OFFSET UNITYSDK_OFFSET(0x175F0010)
#define MOLEMOLE_UIAREASHOPPAGECONTROLLER___C__DISPLAYCLASS50_0__ONCLICKREFRESHGOODS_B__1_OFFSET UNITYSDK_OFFSET(0x175F0110)

namespace MoleMole
{
	inline static constexpr unsigned int UIAreaShopPageController___c__DisplayClass50_0_TypeDefinitionIndex = 72933;

	class UIAreaShopPageController___c__DisplayClass50_0 : public ::System::Object
	{
	public:
		::Class_1_29356A79D0914A09_Class_3_EC22137A5AE21E1C* __9__1; // 0x10
		::MoleMole::UIAreaShopPageController* __4__this; // 0x18
		::System::Int32 currencyID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickRefreshGoods_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER___C__DISPLAYCLASS50_0__ONCLICKREFRESHGOODS_B__0_OFFSET))(this);
		}

		::System::Void _OnClickRefreshGoods_b__1(::Class_0_16E4307DCC419505_29* _)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAREASHOPPAGECONTROLLER___C__DISPLAYCLASS50_0__ONCLICKREFRESHGOODS_B__1_OFFSET))(this, _);
		}
	};
}
