#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UITowerBangbooItemWidgetController_TowerBangbooItem; }

#define MOLEMOLE_UITOWERBANGBOOITEMWIDGETCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13830B20)
#define MOLEMOLE_UITOWERBANGBOOITEMWIDGETCONTROLLER___C__DISPLAYCLASS7_0__ONSCROLLITEMUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x13830B30)

namespace MoleMole
{
	inline static constexpr unsigned int UITowerBangbooItemWidgetController___c__DisplayClass7_0_TypeDefinitionIndex = 56175;

	class UITowerBangbooItemWidgetController___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::MoleMole::UITowerBangbooItemWidgetController_TowerBangbooItem* _data; // 0x10
		::System::Int32 index; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERBANGBOOITEMWIDGETCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnScrollItemUpdate_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITOWERBANGBOOITEMWIDGETCONTROLLER___C__DISPLAYCLASS7_0__ONSCROLLITEMUPDATE_B__0_OFFSET))(this);
		}
	};
}
