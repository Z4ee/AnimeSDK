#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralFilterGroupRowWidgetController___c__DisplayClass26_0; }

#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER___C__DISPLAYCLASS26_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16F6D010)
#define MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER___C__DISPLAYCLASS26_1__REFRESHITEMS_B__0_OFFSET UNITYSDK_OFFSET(0x16F6D020)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralFilterGroupRowWidgetController___c__DisplayClass26_1_TypeDefinitionIndex = 73636;

	class UIGeneralFilterGroupRowWidgetController___c__DisplayClass26_1 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralFilterGroupRowWidgetController___c__DisplayClass26_0* CS___8__locals1; // 0x10
		::System::Int32 itemIdx; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER___C__DISPLAYCLASS26_1__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshItems_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALFILTERGROUPROWWIDGETCONTROLLER___C__DISPLAYCLASS26_1__REFRESHITEMS_B__0_OFFSET))(this);
		}
	};
}
