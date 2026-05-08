#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
namespace MoleMole { class UIBangbooDreamShopPageController; }

#define MOLEMOLE_UIBANGBOODREAMSHOPPAGECONTROLLER___C__DISPLAYCLASS40_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15ED09E0)
#define MOLEMOLE_UIBANGBOODREAMSHOPPAGECONTROLLER___C__DISPLAYCLASS40_0__ONCLICKBUY_B__0_OFFSET UNITYSDK_OFFSET(0x15ED09F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooDreamShopPageController___c__DisplayClass40_0_TypeDefinitionIndex = 60014;

	class UIBangbooDreamShopPageController___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBangbooDreamShopPageController* __4__this; // 0x10
		::System::Int32 goodsID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMSHOPPAGECONTROLLER___C__DISPLAYCLASS40_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickBuy_b__0(::Class_0_16E4307DCC419505_11* _)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOODREAMSHOPPAGECONTROLLER___C__DISPLAYCLASS40_0__ONCLICKBUY_B__0_OFFSET))(this, _);
		}
	};
}
