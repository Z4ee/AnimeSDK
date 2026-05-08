#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBangkovWishlistRowWidgetController; }
namespace MoleMole { class UIItemIconBtnWidgetController; }

#define MOLEMOLE_UIBANGKOVWISHLISTROWWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1680D440)
#define MOLEMOLE_UIBANGKOVWISHLISTROWWIDGETCONTROLLER___C__DISPLAYCLASS6_0__ONSCROLLITEMUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x1680D450)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovWishlistRowWidgetController___c__DisplayClass6_0_TypeDefinitionIndex = 53048;

	class UIBangkovWishlistRowWidgetController___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBangkovWishlistRowWidgetController* __4__this; // 0x10
		::System::Int32 id; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTROWWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnScrollItemUpdate_b__0(::MoleMole::UIItemIconBtnWidgetController* ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIItemIconBtnWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTROWWIDGETCONTROLLER___C__DISPLAYCLASS6_0__ONSCROLLITEMUPDATE_B__0_OFFSET))(this, ctrl);
		}
	};
}
