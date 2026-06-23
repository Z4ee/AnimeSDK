#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainCityMissionWidgetController; }

#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x174D3BA0)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS7_0__SHOWMISSIONFINISHANDHIDE_B__0_OFFSET UNITYSDK_OFFSET(0x174D3BB0)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS7_0__SHOWMISSIONFINISHANDHIDE_B__1_OFFSET UNITYSDK_OFFSET(0x174D3C00)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityMissionWidgetController___c__DisplayClass7_0_TypeDefinitionIndex = 84196;

	class UIMainCityMissionWidgetController___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMainCityMissionWidgetController* __4__this; // 0x10
		::System::Int32 finishQuestID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowMissionFinishAndHide_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS7_0__SHOWMISSIONFINISHANDHIDE_B__0_OFFSET))(this);
		}

		::System::Void _ShowMissionFinishAndHide_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS7_0__SHOWMISSIONFINISHANDHIDE_B__1_OFFSET))(this);
		}
	};
}
