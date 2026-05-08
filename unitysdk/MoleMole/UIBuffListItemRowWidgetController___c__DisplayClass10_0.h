#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBuffListItemRowWidgetController; }
namespace MoleMole { class UIBuffListItemRowWidgetController_BuffListItemData; }

#define MOLEMOLE_UIBUFFLISTITEMROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x142D9010)
#define MOLEMOLE_UIBUFFLISTITEMROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__ONSCROLLITEMUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x142D9020)

namespace MoleMole
{
	inline static constexpr unsigned int UIBuffListItemRowWidgetController___c__DisplayClass10_0_TypeDefinitionIndex = 78748;

	class UIBuffListItemRowWidgetController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBuffListItemRowWidgetController_BuffListItemData* _data; // 0x10
		::MoleMole::UIBuffListItemRowWidgetController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUFFLISTITEMROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnScrollItemUpdate_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUFFLISTITEMROWWIDGETCONTROLLER___C__DISPLAYCLASS10_0__ONSCROLLITEMUPDATE_B__0_OFFSET))(this);
		}
	};
}
