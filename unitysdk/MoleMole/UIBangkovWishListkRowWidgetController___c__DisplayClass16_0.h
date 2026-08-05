#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_175;
namespace MoleMole { class UIBangkovWishListkRowWidgetController; }

#define MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18E481C0)
#define MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER___C__DISPLAYCLASS16_0__REFRESHREWARDITEMS_B__0_OFFSET UNITYSDK_OFFSET(0x18E481D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovWishListkRowWidgetController___c__DisplayClass16_0_TypeDefinitionIndex = 77486;

	class UIBangkovWishListkRowWidgetController___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBangkovWishListkRowWidgetController* __4__this; // 0x10
		::System::Int32 tipItemId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshRewardItems_b__0(::Class_0_16E4307DCC419505_175* ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER___C__DISPLAYCLASS16_0__REFRESHREWARDITEMS_B__0_OFFSET))(this, ctrl);
		}
	};
}
