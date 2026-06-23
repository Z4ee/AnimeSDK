#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBangkovWishListkRowWidgetController; }
namespace MoleMole { class UIItemIconBtnWidgetController; }

#define MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17608030)
#define MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER___C__DISPLAYCLASS16_0__REFRESHREWARDITEMS_B__0_OFFSET UNITYSDK_OFFSET(0x17608040)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovWishListkRowWidgetController___c__DisplayClass16_0_TypeDefinitionIndex = 86472;

	class UIBangkovWishListkRowWidgetController___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBangkovWishListkRowWidgetController* __4__this; // 0x10
		::System::Int32 tipItemId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshRewardItems_b__0(::MoleMole::UIItemIconBtnWidgetController* ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIItemIconBtnWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER___C__DISPLAYCLASS16_0__REFRESHREWARDITEMS_B__0_OFFSET))(this, ctrl);
		}
	};
}
