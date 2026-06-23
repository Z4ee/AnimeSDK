#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIHANDBOOKWEEKENDBOSSITEMWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16F82740)
#define MOLEMOLE_UIHANDBOOKWEEKENDBOSSITEMWIDGETCONTROLLER___C__DISPLAYCLASS8_0__ONSCROLLITEMUPDATE_B__1_OFFSET UNITYSDK_OFFSET(0x16F82750)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookWeekendBossItemWidgetController___c__DisplayClass8_0_TypeDefinitionIndex = 68354;

	class UIHandBookWeekendBossItemWidgetController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Int32 materialItemId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKWEEKENDBOSSITEMWIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnScrollItemUpdate_b__1(::System::Int32 ItemId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKWEEKENDBOSSITEMWIDGETCONTROLLER___C__DISPLAYCLASS8_0__ONSCROLLITEMUPDATE_B__1_OFFSET))(this, ItemId);
		}
	};
}
