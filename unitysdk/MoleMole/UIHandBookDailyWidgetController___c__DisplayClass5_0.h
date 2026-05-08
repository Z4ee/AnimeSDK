#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x158220B0)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___C__DISPLAYCLASS5_0__ONSHOW_B__1_OFFSET UNITYSDK_OFFSET(0x158220C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookDailyWidgetController___c__DisplayClass5_0_TypeDefinitionIndex = 64017;

	class UIHandBookDailyWidgetController___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Int32 materialItemId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnShow_b__1(::System::Int32 ItemId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___C__DISPLAYCLASS5_0__ONSHOW_B__1_OFFSET))(this, ItemId);
		}
	};
}
