#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SRDebugger::UI::Tabs { class OptionsTabController; }
namespace SRDebugger::UI::Tabs { class OptionsTabController_CategoryInstance; }

#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER___C__DISPLAYCLASS51_0__CREATECATEGORY_B__1_OFFSET UNITYSDK_OFFSET(0x19EA0E20)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER___C__DISPLAYCLASS51_0__CREATECATEGORY_B__2_OFFSET UNITYSDK_OFFSET(0x19EA0E50)
#define SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER___C__DISPLAYCLASS51_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19E9F940)

namespace SRDebugger::UI::Tabs
{
	inline static constexpr unsigned int OptionsTabController___c__DisplayClass51_0_TypeDefinitionIndex = 35359;

	class OptionsTabController___c__DisplayClass51_0 : public ::System::Object
	{
	public:
		::SRDebugger::UI::Tabs::OptionsTabController* __4__this; // 0x10
		::SRDebugger::UI::Tabs::OptionsTabController_CategoryInstance* categoryInstance; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER___C__DISPLAYCLASS51_0__CTOR_OFFSET))(this);
		}

		::System::Void _CreateCategory_b__1(::System::Boolean b)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER___C__DISPLAYCLASS51_0__CREATECATEGORY_B__1_OFFSET))(this, b);
		}

		::System::Void _CreateCategory_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_TABS_OPTIONSTABCONTROLLER___C__DISPLAYCLASS51_0__CREATECATEGORY_B__2_OFFSET))(this);
		}
	};
}
