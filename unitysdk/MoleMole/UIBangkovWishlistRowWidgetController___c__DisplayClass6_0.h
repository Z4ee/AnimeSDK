#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_175;
namespace MoleMole { class UIBangkovWishlistRowWidgetController; }

#define MOLEMOLE_UIBANGKOVWISHLISTROWWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18E48390)
#define MOLEMOLE_UIBANGKOVWISHLISTROWWIDGETCONTROLLER___C__DISPLAYCLASS6_0__ONSCROLLITEMUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x18E483A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovWishlistRowWidgetController___c__DisplayClass6_0_TypeDefinitionIndex = 88059;

	class UIBangkovWishlistRowWidgetController___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBangkovWishlistRowWidgetController* __4__this; // 0x10
		::System::Int32 id; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTROWWIDGETCONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnScrollItemUpdate_b__0(::Class_0_16E4307DCC419505_175* ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_175*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTROWWIDGETCONTROLLER___C__DISPLAYCLASS6_0__ONSCROLLITEMUPDATE_B__0_OFFSET))(this, ctrl);
		}
	};
}
