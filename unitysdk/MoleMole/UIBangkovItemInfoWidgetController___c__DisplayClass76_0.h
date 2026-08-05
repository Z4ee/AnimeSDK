#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBangkovItemInfoWidgetController; }

#define MOLEMOLE_UIBANGKOVITEMINFOWIDGETCONTROLLER___C__DISPLAYCLASS76_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19A818A0)
#define MOLEMOLE_UIBANGKOVITEMINFOWIDGETCONTROLLER___C__DISPLAYCLASS76_0__ONCLICKUSEITEM_B__0_OFFSET UNITYSDK_OFFSET(0x19A818B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovItemInfoWidgetController___c__DisplayClass76_0_TypeDefinitionIndex = 56443;

	class UIBangkovItemInfoWidgetController___c__DisplayClass76_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBangkovItemInfoWidgetController* __4__this; // 0x10
		::System::Int32 itemId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVITEMINFOWIDGETCONTROLLER___C__DISPLAYCLASS76_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickUseItem_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVITEMINFOWIDGETCONTROLLER___C__DISPLAYCLASS76_0__ONCLICKUSEITEM_B__0_OFFSET))(this);
		}
	};
}
