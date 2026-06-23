#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3CC13814F0D84EAE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_201;
namespace MoleMole { class UIGeneralPurchasePopWindowController; }

#define MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__DISPLAYCLASS49_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14677F20)
#define MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__DISPLAYCLASS49_0__DOPURCHASE_B__0_OFFSET UNITYSDK_OFFSET(0x14677F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralPurchasePopWindowController___c__DisplayClass49_0_TypeDefinitionIndex = 60705;

	class UIGeneralPurchasePopWindowController___c__DisplayClass49_0 : public ::System::Object
	{
	public:
		::Struct_2_3CC13814F0D84EAE purchaseGoodsInfo; // 0x10
		::MoleMole::UIGeneralPurchasePopWindowController* __4__this; // 0x48
		::Class_0_16E4307DCC419505_201* goodsInfo; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__DISPLAYCLASS49_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoPurchase_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPURCHASEPOPWINDOWCONTROLLER___C__DISPLAYCLASS49_0__DOPURCHASE_B__0_OFFSET))(this);
		}
	};
}
