#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17DADF60)
#define MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___C__DISPLAYCLASS9_0__ONSCROLLITEMUPDATE_B__5_OFFSET UNITYSDK_OFFSET(0x17DADF70)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookItemWidgetController___c__DisplayClass9_0_TypeDefinitionIndex = 70475;

	class UIHandBookItemWidgetController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::System::Int32 materialItemId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnScrollItemUpdate_b__5(::System::Int32 ItemId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKITEMWIDGETCONTROLLER___C__DISPLAYCLASS9_0__ONSCROLLITEMUPDATE_B__5_OFFSET))(this, ItemId);
		}
	};
}
