#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
namespace MoleMole { class UITrendyStoreWidgetChildWindowController; }

#define MOLEMOLE_UITRENDYSTOREWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS22_0__BOOKTOYDEAL_B__0_OFFSET UNITYSDK_OFFSET(0x137AF910)
#define MOLEMOLE_UITRENDYSTOREWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x137AF900)

namespace MoleMole
{
	inline static constexpr unsigned int UITrendyStoreWidgetChildWindowController___c__DisplayClass22_0_TypeDefinitionIndex = 55103;

	class UITrendyStoreWidgetChildWindowController___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::MoleMole::UITrendyStoreWidgetChildWindowController* __4__this; // 0x10
		::System::Int32 bookDealID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void _BookToyDeal_b__0(::Class_0_16E4307DCC419505_11* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRENDYSTOREWIDGETCHILDWINDOWCONTROLLER___C__DISPLAYCLASS22_0__BOOKTOYDEAL_B__0_OFFSET))(this, msg);
		}
	};
}
