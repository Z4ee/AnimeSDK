#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMiniscapeEntrustBtnWidgetController; }
namespace MoleMole { class UIMiniscapeEntrustPageController___c__DisplayClass8_0; }

#define MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER___C__DISPLAYCLASS8_1__CTOR_OFFSET UNITYSDK_OFFSET(0x178B4540)
#define MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER___C__DISPLAYCLASS8_1__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x178B4550)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniscapeEntrustPageController___c__DisplayClass8_1_TypeDefinitionIndex = 42779;

	class UIMiniscapeEntrustPageController___c__DisplayClass8_1 : public ::System::Object
	{
	public:
		::MoleMole::UIMiniscapeEntrustPageController___c__DisplayClass8_0* CS___8__locals1; // 0x10
		::MoleMole::UIMiniscapeEntrustBtnWidgetController* taskWidget; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER___C__DISPLAYCLASS8_1__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEENTRUSTPAGECONTROLLER___C__DISPLAYCLASS8_1__REFRESHVIEW_B__0_OFFSET))(this);
		}
	};
}
