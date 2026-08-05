#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_175;
namespace MoleMole { class UIZenkovWishListkRowWidgetController; }

#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0x162F2490)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___C__DISPLAYCLASS17_0__REFRESHREWARDITEMS_B__0_OFFSET UNITYSDK_OFFSET(0x162F24A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovWishListkRowWidgetController___c__DisplayClass17_0_TypeDefinitionIndex = 78866;

	class UIZenkovWishListkRowWidgetController___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovWishListkRowWidgetController* __4__this; // 0x10
		::System::Int32 tipItemId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshRewardItems_b__0(::Class_0_16E4307DCC419505_175* ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___C__DISPLAYCLASS17_0__REFRESHREWARDITEMS_B__0_OFFSET))(this, ctrl);
		}
	};
}
